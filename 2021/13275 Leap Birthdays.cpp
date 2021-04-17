#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca=1;
    cin>>t;
    while(t--)
    {
        int d,m,y,qy,leap=0;
        cin>>d>>m>>y>>qy;
        if(d!=29)
        {
            cout<<"Case "<<ca++<<": "<<qy-y<<endl;
            continue;
        }
        for(int i=y+1; i<=qy; i++)
        {
            if(i%400==0)
                leap++;
            else if(i%4==0&&i%100!=0)
                leap++;
        }
        cout<<"Case "<<ca++<<": "<<leap<<endl;
    }
    return 0;
}
