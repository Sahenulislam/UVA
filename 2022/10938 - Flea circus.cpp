#include <bits/stdc++.h>
using namespace std;
#define ll int
const ll mxn=5006;
vector<ll>g[mxn];
ll parent[mxn],level[mxn],st[mxn][30];
void dfs(ll u,ll p)
{
    for(auto v:g[u])
    {
        if(v!=p)
        {
            parent[v]=u;
            level[v]=level[u]+1;
            dfs(v,u);
        }
    }
}

void sparsetable(ll n)
{
    memset(st,-1,sizeof(st));
    for(ll i=1; i<=n; i++)
    {
        st[i][0]=parent[i];
    }
    for(ll j=1; (1<<j)<=n; j++)
    {
        for(ll i=1; i<=n; i++)
        {
            if(st[i][j-1]!=-1)
            {
                st[i][j]=st[st[i][j-1]][j-1];
            }
        }
    }
}

ll LCA(ll u,ll v)
{
    if(level[u]<level[v])
        swap(u,v);
    ll log=log2(level[u]);
    log++;
    for(ll j=log; j>=0; j--)
    {
        if(level[u]-(1<<j)>=level[v])
            u=st[u][j];
    }
    if(u==v)return u;
    for(ll j=log; j>=0; j--)
    {
        if(st[u][j]!=st[v][j])
        {
            u=st[u][j];
            v=st[v][j];
        }
    }
    return parent[u];
}
ll kthLCA(ll u,ll k)
{
    //cout<<"c "<<u<<endl;
    ll log;
    while(k>0)
    {
        log=log2(k);
        u=st[u][log];
        k-=(1<<log);
    }
    //cout<<u<<endl;
    return u;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,u,v,tem;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(ll i=0; i<n-1; i++)
        {
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        parent[1]=-1;
        level[1]=0;
        dfs(1,-1);
        sparsetable(n);
        ll q;
        cin>>q;
        while(q--)
        {
            cin>>u>>v;
            ll lca=LCA(u,v);
            ll distance=level[u]+level[v]-(2*level[lca]);
            ll ans;
            //cout<<level[u]<<" "<<level[v]<<endl;
            if(level[u]>level[v])
                ans=kthLCA(u,distance/2);
            else
                ans=kthLCA(v,distance/2);
            if(distance%2==0)
            {
                cout<<"The fleas meet at "<<ans<<"."<<endl;
            }
            else
            {
                ll tem=st[ans][0];
                cout<<"The fleas jump forever between "<<tem<<" and "<<ans<<"."<<endl;
            }
        }
        for(ll i=0; i<mxn; i++)
        {
            g[i].clear();
            parent[i]=0;
            level[i]=0;
        }
    }
    return 0;
}

