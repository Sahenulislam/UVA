#include<iostream>
#include<cmath>
using namespace std;
int p[44444];
void sieve()
{
    int i,j,sq;
    sq=sqrt(35000);
    for(i=4; i<=35000; i+=2)
    {
        p[i]=1;
    }
    for(i=3; i<=sq; i+=2)
    {
        if(p[i]==0)
        {
            for(j=i*i; j<=35000; j+=i)
            {
                p[j]=1;
            }
        }
    }
    p[1]=1;
}

int main()
{
    sieve();
    int n,coun,i,j;
    while(cin>>n && n!=0)
    {
        coun=0;
        for(i=1,j=n-1; i<=n/2; i++,j--)
        {
            if(p[i]==0&&p[j]==0&&i+j==n)
            {
                coun++;
            }
        }
        cout<<coun<<endl;
    }
    return 0;
}
