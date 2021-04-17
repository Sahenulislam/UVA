#include<iostream>
#include<cmath>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int p[1111111];
void siv()
{
    int i,j,sq;
    sq=sqrt(1000111);
    for(i=4; i<=1000111; i+=2)
    {
        p[i]=1;
    }
    for(i=3; i<=sq; i+=2)
    {
        if(p[i]==0)
        {
            for(j=i*i; j<=1000111; j+=i)
            {
                p[j]=1;
            }
        }
    }
    p[1]=p[0]=1;
}
int main()
{
    fast
    siv();
    int n,i,flag,j;
    while(cin>>n&&n!=0)
    {
        flag=0;
        for(i=0,j=n; i<=n/2; i++,j--)
        {
            if(p[i]==0&&p[j]==0)
            {
                flag=1;
                cout<<n<<":\n"<<i<<"+"<<j<<endl;
                break;
            }
        }
        if(flag==0)
        {
            cout<<n<<":\n"<<"NO WAY!"<<endl;
        }
    }
    return 0;
}
