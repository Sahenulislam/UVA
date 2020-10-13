#include<stdio.h>
int main()
{
    int t,i,q,j,ara[10000],max;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&q);
        for(j=0; j<q; j++)
        {
            scanf("%d",&ara[j]);
        }
        max=ara[0];
        for(j=0; j<q; j++)
        {
            if(max<ara[j])
                max=ara[j];
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
