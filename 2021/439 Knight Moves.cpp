#include<bits/stdc++.h>
using namespace std;

int grid[10][10];
int level[10][10];

int rr[10]={2,2,-2,-2,1,-1,1,-1};
int cc[10]={1,-1,1,-1,2,2,-2,-2};
int bfs(int r,int c,int des1,int des2)
{
    int ans=0;
    memset(level,0,sizeof level);
    memset(grid,0,sizeof grid);
    queue<pair<int,int>>que;
    que.push({r,c});
    level[r][c]=0;
    while(!que.empty())
    {
        int tr=que.front().first;
        int tc=que.front().second;
        grid[tr][tc]=1;
        que.pop();

        for(int i=0;i<8;i++)
        {
            int aa=tr+rr[i];
            int bb=tc+cc[i];
            if(aa>=1&&aa<=8&&bb>=1&&bb<=8&&grid[aa][bb]!=1)
            {
                que.push({aa,bb});
                grid[aa][bb]=1;
                if(aa==des1&&bb==des2)
                {
                    ans+=level[tr][tc]+1;
                    break;
                }
                level[aa][bb]=level[tr][tc]+1;
            }
        }
    }
    return ans;
}

int main()
{
    map<char,int>mp={{'a',1},{'b',2},{'c',3},{'d',4},{'e',5},{'f',6},{'g',7},{'h',8}};
    string s1,s2;
    while(cin>>s1)
    {
        getchar();
        cin>>s2;
        int r,c,des1,des2;
        c=mp[s1[0]],des2=mp[s2[0]];
        r=s1[1]-'0',des1=s2[1]-'0';
        //cout<<c1<<" "<<c2<<" "<<a<<" "<<b<<endl;
        int a=bfs(r,c,des1,des2);
        cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<a<<" knight moves."<<endl;
    }
}
