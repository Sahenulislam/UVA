#include<stdio.h>
int main()
{
    int a[100010],b[100010],ara[100010];
    int ts,tss,dd=0;
    scanf("%d",&ts);
    while(ts--)
    {
        if(dd>0)
            printf("\n");
            dd++;
        int i,sum=0,carry=0,w=0;
        scanf("%d",&tss);
        for(i=0; i<tss; i++)
        {
            scanf("%d %d",&a[i],&b[i]);
        }
        for(i=tss-1; i>=0; i--)
        {
            sum=a[i]+b[i];
            ara[w]=(sum+carry)%10;
            carry=(sum+carry)/10;
            w++;
        }
        for(i=w-1; i>=0; i--)
        {
            printf("%d",ara[i]);
        }
        printf("\n");
    }
    return 0;
}
