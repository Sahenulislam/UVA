#include<stdio.h>
int main()
{
    long long int t,r,n,p,sum=0,g=0,temp,s=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        sum=0;
        g=0;
        s=0;
        r=n;
        while(1)
        {
            s=r;
            while(r!=0)
            {
                temp=r%10;
                r=r/10;
                sum=sum*10+temp;
            }
            if(sum==s)
            {
                printf("%lld %lld\n",g,sum);
                break;
            }
            else
            {
                g++;
                p=s+sum;
                r=p;
                sum=0;
            }
        }
    }
    return 0;
}
