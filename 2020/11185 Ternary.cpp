#include<stdio.h>
int main()
{
    int n,remainder,ara[100],i=0,j;
    while(scanf("%d",&n)==1 && n>-1)
    {
        if(n==0)
            printf("0");
        i=0;
        while(n!=0)
        {
            remainder=n%3;
            n=n/3;
            ara[i]=remainder;
            i++;
        }
        for(j=i-1; j>=0; j--)
        {
            printf("%d",ara[j]);
        }
        printf("\n");
    }
    return 0;
}
