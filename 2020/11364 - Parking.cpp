#include<stdio.h>
int main()
{
    int t,n,p[10000],i,max=0,min=0;
    scanf("%d",&t);
    while(t--)
    {
        max=0,min=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&p[i]);
        }
        min=p[0];
        max=p[0];
        for(i=1; i<n; i++)
        {
            if(min>p[i])
                min=p[i];
            if(max<p[i])
                max=p[i];
        }
        printf("%d\n",(max-min)*2);
    }
    return 0;
}
