#include <bits/stdc++.h>
using namespace std;
#define ll int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const ll mx=1005;
ll visit1[mx][mx];
ll visit2[mx][mx];
ll level1[mx][mx];
ll level2[mx][mx];
ll R[4]= {1,-1,0,0};
ll C[4]= {0,0,1,-1};
ll mn,r,c;
char ch[mx][mx];
void bfs1(ll u,ll v)
{
    queue<pair<ll,ll>>q;
    q.push({u,v});
    level1[u][v]=0;
    visit1[u][v]=1;
    while(!q.empty())
    {
        pair<ll,ll>temp=q.front();
        u=temp.first;
        v=temp.second;
        q.pop();
        for(ll i=0; i<4; i++)
        {
            ll x=u+R[i];
            ll y=v+C[i];
            if(x<r&&x>=0&&y<c&&y>=0&&ch[x][y]!='#')
            {
                if(level1[u][v]+1>=level1[x][y]&&level1[x][y]!=-1)
                    continue;
                q.push({x,y});
                level1[x][y]=level1[u][v]+1;
                visit1[x][y]=1;
            }
        }
    }
}
ll bfs2(ll u,ll v)
{
    memset(visit2,-1,sizeof(visit2));
    memset(level2,-1,sizeof(level2));
    queue<pair<ll,ll>>q;
    q.push({u,v});
    level2[u][v]=0;
    visit2[u][v]=1;
    while(!q.empty())
    {
        pair<ll,ll>tem=q.front();
        u=tem.first;
        v=tem.second;
        q.pop();
        for(ll i=0; i<4; i++)
        {
            ll x=u+R[i];
            ll y=v+C[i];
            if(x==-1||x==r||y==-1||y==c)
            {
                mn=min(mn,level2[u][v]+1);
            }
            if(ch[x][y]!='#'&&x<r&&x>=0&&y<c&&y>=0&&visit2[x][y]==-1)
            {
                if(level2[u][v]+1>=level1[x][y]&&visit1[x][y]==1)
                    continue;
                level2[x][y]=level2[u][v]+1;
                q.push({x,y});
                visit2[x][y]=1;
            }
        }
    }
    return mn;
}
int main()
{
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        mn=1e8;
        cin>>r>>c;
        ll x,y,m=-1,n=-1;
        for(ll i=0; i<r; i++)
        {
            for(ll j=0; j<c; j++)
            {
                cin>>ch[i][j];
                if(ch[i][j]=='J')
                {
                    x=i;
                    y=j;
                }
                if(ch[i][j]=='F')
                {
                    m=i;
                    n=j;
                }
            }
        }
        memset(visit1,-1,sizeof(visit1));
        memset(level1,-1,sizeof(level1));
        for(ll i=0; i<r; i++)
        {
            for(ll j=0; j<c; j++)
            {
                if(ch[i][j]=='F')
                {
                    bfs1(i,j);
                }
            }
        }
        ll k=bfs2(x,y);
        if(k==1e8||(x==m&&y==n))
            cout<<"IMPOSSIBLE"<<endl;
        else cout<<mn<<endl;
    }
    return 0;
}

