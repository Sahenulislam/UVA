#include<bits/stdc++.h>
using namespace std;
int sum=0;
vector<int>v[1000];
int visited[1000];
void dfs(int u)
{
    int a;
    for(int i=0; i<v[u].size(); i++)
    {
        a=v[u][i];
        if(visited[a]==0)
        {
            visited[a]=1;
            sum++;
            dfs(a);
        }
    }
    return;
}

int main()
{
    int t,a,b;
    while(cin>>t)
    {
        memset(v,0,sizeof v);
        if(t==0)
            break;
        while(1)
        {
            cin>>a;
            if(a==0)
                break;
            while(cin>>b)
            {
                if(b==0)
                    break;
                v[a].push_back(b);
            }
        }
        int cont,valu;
        cin>>cont;
        for(int i=0; i<cont; i++)
        {
            cin>>valu;
            dfs(valu);
            cout<<t-sum;
            for(int j=1; j<=t; j++)
            {
                if(visited[j]==0)
                {
                    cout<<" "<<j;
                }
            }
            cout<<endl;
            memset(visited,0,sizeof visited);
            sum=0;
        }

    }
    return 0;
}

