#include<bits/stdc++.h>
using namespace std;

map<int,vector<int>>mp;
map<int,vector<int>>::iterator it;
int visit[10000];

int BFS(int n)
{
    queue<int>que;
    visit[n]=1;
    que.push(n);
    while(!que.empty())
    {
        int a=que.front();
        cout<<a<<endl;
        for(int i=0; i<mp[a].size(); i++)
        {
            int d=mp[a][i];
            if(visit[d]!=0)
            {
                if(visit[d]==visit[a])
                    return 1;
            }
            else if(visit[d]==0)
            {
                que.push(d);
                if(visit[a]==1)
                    visit[d]=2;
                else
                    visit[d]=1;
            }
        }
        que.pop();
    }
    return 12;
}

int main()
{
    int n,a,b;
    while(cin>>n&&n!=0)
    {
        int l;
        cin>>l;
        for(int i=0; i<l; i++)
        {
            cin>>a>>b;
            mp[a].push_back(b);
            mp[b].push_back(a);
        }
        memset(visit,0,sizeof(visit));
        int kk=BFS(0);
        if(kk==12)
            cout<<"BICOLORABLE."<<endl;
        else
            cout<<"NOT BICOLORABLE."<<endl;
        mp.clear();
    }
}
