#include<stdio.h>
int main()
{
    int test,TW,W,ara[100],C=0,G=0,I=0,j,i;
    scanf("%d",&test);
    for(j=1; j<=test; j++)
    {
        C=0,G=0,I=0;
        scanf("%d",&TW);
        while(TW--)
        {
            scanf("%d",&W);
            ara[I]=W;
            I++;
        }
        for(i=1; i<I; i++)
        {
            if(ara[i]>ara[i-1])
                C++;
            else if(ara[i]<ara[i-1])
                G++;
        }
        printf("Case %d: %d %d\n",j,C,G);
    }
    return 0;
}

