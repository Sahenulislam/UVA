#include<stdio.h>
#include<math.h>
int main()
{
    long long int ts,n,d;
    scanf("%lld",&ts);
    while(ts--)
    {
        scanf("%lld",&n);
        d=(-1+sqrt(1+8*n))/2;
        printf("%lld\n",d);
    }
    return 0;
}
