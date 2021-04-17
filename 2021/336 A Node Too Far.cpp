#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;
map<int,vector<int>>g;
map<int,int>visit;
map<int,int>level;
map<int,int>g2;
map<int,int>::iterator it;
void BFS(int u)
{
    int a,b,i;
    visit[u]=1;
    level[u]=0;
    g2[u]=0;
    queue<int>que;
    que.push(u);
    while(!que.empty())
    {
        a=que.front();
        for(i=0; i<g[a].size(); i++)
        {
            b=g[a][i];
            if(visit[b]==0)
            {
                visit[b]=1;
                level[b]=level[a]+1;
                g2[b]=0;
                que.push(b);
            }
        }
        que.pop();
    }
}

int main()
{
    int n,e,i,j,k,l,m,a,b,q=1;
    while(cin>>n && n!=0)
    {
        for(i=1; i<=n; i++)
        {
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        int ll,tt;
        while(cin>>ll>>tt &&(ll!=0||tt!=0))
        {
            BFS(ll);
            int ok=0;
            for(it=g2.begin(); it!=g2.end(); it++)
            {
                if(level[it->first]>tt)
                    ok++;
            }
            cout<<"Case "<<q++<<": "<<g.size()-g2.size()+ok<<" nodes not reachable from node "<<ll<<" with TTL = "<<tt<<"."<<endl;
            level.clear();
            visit.clear();
            g2.clear();
        }
        g.clear();
    }
    return 0;
}
