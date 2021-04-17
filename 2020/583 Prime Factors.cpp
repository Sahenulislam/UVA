#include<iostream>
#include<cmath>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int p[1000050],pr[1000050];
void siv()
{
    int i,j,sq,t=1;
    pr[t]=2;
    for(i=3; i<=46340; i+=2)
    {
        if(p[i]==0)
        {
            t++;
            pr[t]=i;
            for(j=i*i; j<=46340; j+=i)
            {
                p[j]=1;
            }
        }
    }
}
int main()
{
    fast
    siv();
    long long int n,k,tt,i,j;
    while(cin>>n && n!=0)
    {
        tt=0;
        long long int ll;
        printf("%lld = ",n);
        if(n<0)
        {
            n=n*(-1);
            printf("-1 x ");
        }
        int ddd=0;
        for(i=1; i<=4792; i++)
        {
            ll=pr[i];
            while(n%ll==0)
            {
                ddd=1;
                if(tt==0)
                    printf("%lld",ll);
                else
                    printf(" x %lld",ll);
                tt=1;
                n=n/ll;
            }
            if(n==1)
                break;
        }
        if(n!=1&&ddd==1)
        {
            printf(" x %lld",n);
        }
        if(ddd==0)
            printf("%lld",n);
        printf("\n");
    }
    return 0;
}
