#include<stdio.h>
int main()
{
    int t,i,n,k,p,r;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        r=0;
        scanf("%d %d %d",&n,&k,&p);
        if(k+p>n)
        {
            r=(p+k)%n;
            if(r==0)
                printf("Case %d: %d\n",i,n);
            else
                printf("Case %d: %d\n",i,r);
        }
        else
        {
            r=p+k;
            printf("Case %d: %d\n",i,r);
        }
    }
    return 0;
}
