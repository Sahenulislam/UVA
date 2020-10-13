#include<stdio.h>
int main()
{
    int i,n,sum=0,p;
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(i=1; i<=n; i++)
        {
            sum=0;
            while(n!=0)
            {
                p=n%10;
                n=n/10;
                sum=sum+p;
            }
            if(sum<10)
                break;
            n=sum;
        }
        printf("%d\n",sum);
    }
    return 0;
}
