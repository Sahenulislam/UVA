#include<stdio.h>
int main()
{
    int n,ara[100000];
    while(scanf("%d",&n)==1 && n!=0)
    {
        int value,i,j,t=0;
        for(i=0; i<200; i++)
        {
            ara[i]=0;
        }
        for(i=1; i<=n; i++)
        {
            scanf("%d",&value);
            ara[value]=ara[value]+1;
        }
        for(i=1; i<200; i++)
        {
            if(ara[i]>0)
            {
                for(j=0; j<ara[i]; j++)
                {
                    t++;
                    printf("%d",i);
                    if(t<n)
                        printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
