#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1 && n!=0)
    {
        sum=0;
        for(i=1; i<=n/2; i++)
        {
            if(n%i==0)
                sum=sum+i;
        }
        if(sum==n)
            printf("%5d  PERFECT\n",n);
        else if(sum>n)
            printf("%5d  ABUNDANT\n",n);
        else if(sum<n)
            printf("%5d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
