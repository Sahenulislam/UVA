#include<bits/stdc++.h>
using namespace std;

//const int m=1010;
//const int n=1010;
int grid[1010][1010];
int level[1010][1010];
void bfs(int r,int c,int str1,int str2,int des1,int des2)
{
    int ans=0;
//    memset(level,0,sizeof level);
    for(int i=0;i<r+2;i++)
        for(int j=0;j<c+2;j++)
            level[i][j]=0;
    queue<pair<int,int>>que;
    que.push({str1,str2});
    level[str1][str2]=0;
    while(!que.empty())
    {
        int a,b;
        int tr=que.front().first;
        int tc=que.front().second;
        que.pop();
        grid[tr][tc]=1;

        a=tr-1;
        b=tc;
        if(a<r&&a>=0&&b<c&&b>=0&&grid[a][b]!=1)
        {
            que.push({a,b});
            grid[a][b]=1;
            if(des1==a&&des2==b)
            {
                ans+=level[tr][tc]+1;
                break;
            }
            level[a][b]=level[tr][tc]+1;
        }
        a=tr+1;
        b=tc;
        if(a<r&&a>=0&&b<c&&b>=0&&grid[a][b]!=1)
        {
            que.push({a,b});
             grid[a][b]=1;
            if(des1==a&&des2==b)
            {
                ans+=level[tr][tc]+1;
                break;
            }
            level[a][b]=level[tr][tc]+1;
        }
        a=tr;
        b=tc-1;
        if(a<r&&a>=0&&b<c&&b>=0&&grid[a][b]!=1)
        {
            que.push({a,b});
             grid[a][b]=1;
            if(des1==a&&des2==b)
            {
                ans+=level[tr][tc]+1;
                break;
            }
            level[a][b]=level[tr][tc]+1;
        }
        a=tr;
        b=tc+1;
        if(a<r&&a>=0&&b<c&&b>=0&&grid[a][b]!=1)
        {
            que.push({a,b});
             grid[a][b]=1;
            if(des1==a&&des2==b)
            {
                ans+=level[tr][tc]+1;
                break;
            }
            level[a][b]=level[tr][tc]+1;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int r,c;
    int row;
    while(cin>>r>>c)
    {
        if(r==0&&c==0)
            break;
        cin>>row;
        memset(grid,0,sizeof grid);
        for(int i=0; i<row; i++)
        {
            int roww,a,bom;
            cin>>roww>>bom;
            for(int j=0; j<bom; j++)
            {
                cin>>a;
                grid[roww][a]=1;
            }
        }
        int str1,str2;
        cin>>str1>>str2;
        int des1,des2;
        cin>>des1>>des2;
        bfs(r,c,str1,str2,des1,des2);
    }
    return 0;
}
