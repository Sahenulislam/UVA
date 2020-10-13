#include<stdio.h>
int main()
{
    int i,n,sum;
    while(scanf("%d",&n)==1 && n!=0)
    {
        sum=0;
        for(i=n; i>=2; i--)
            sum=sum+i*i;
        if(n==1)
            printf("1\n");
        else
            printf("%d\n",sum+1);
    }
    return 0;
}
