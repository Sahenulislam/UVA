#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mxn=200005;
vector<pair<ll,ll>>g[mxn];
ll parent[mxn],level[mxn],st[mxn][70],cost[mxn];
void dfs(ll u,ll p)
{
    for(auto x:g[u])
    {
        ll v=x.first;
        ll w=x.second;
        if(v!=p)
        {
            level[v]=level[u]+1;
            cost[v]=cost[u]+w;
            parent[v]=u;
            dfs(v,u);
        }
    }
}

void sparsetable(ll n)
{
    memset(st,-1,sizeof(st));
    for(ll i=0; i<n; i++)
    {
        st[i][0]=parent[i];
    }
    for(ll j=1; (1<<j)<=n; j++)
    {
        for(ll i=0; i<n; i++)
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
        {
            u=st[u][j];
        }
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,u,w,v;
    while(cin>>n)
    {
        if(n==0)break;
        for(ll i=1; i<n; i++)
        {
            cin>>u>>w;
            g[u].push_back({i,w});
            g[i].push_back({u,w});
        }
        level[0]=0;
        cost[0]=0;
        parent[0]=-1;
        dfs(0,-1);
        sparsetable(n);
        ll q;
        cin>>q;
        while(q--)
        {
            cin>>u>>v;
            ll lca=LCA(u,v);
            cout<<cost[u]+cost[v]-(2*cost[lca])<<endl;
        }
        for(ll i=0;i<mxn;i++)
        {
            g[i].clear();
            level[i]=0;
            parent[i]=0;
            cost[i]=0;
        }
    }
    return 0;
}

