#include<bits/stdc++.h>
using namespace std;

vector<int>v[50];
int visited[50];

void dfs(int u)
{
    int a;
    visited[u]=1;
    for(int i=0; i<v[u].size(); i++)
    {
        a=v[u][i];
        if(visited[a]==0)
        {
            visited[a]=1;
            dfs(a);
        }
    }
    return;
}




int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(v,0,sizeof v);
        memset(visited,0,sizeof visited);
        char fi;
        string s;
        cin>>fi;
        int a=fi-'A'+1;
        getchar();
        while(1)
        {
            getline(cin,s);
            if(s.empty())
                break;
            int node1=s[0]-'A'+1;
            int node2=s[1]-'A'+1;
            v[node1].push_back(node2);
            v[node2].push_back(node1);
        }
        int subgraph=0;
        for(int i=1; i<=a; i++)
        {
            if(visited[i]==0)
            {
                subgraph++;
                dfs(i);
            }
        }
        cout<<subgraph<<endl;
        if(t!=0)
            cout<<endl;
    }
}
