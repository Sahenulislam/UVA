#include<stdio.h>
int main()
{
    int i,t,a,b,c;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && b>c && b>c)
            printf("Case %d: %d\n",i,b);
        else if(a>b && a>c && c>b)
            printf("Case %d: %d\n",i,c);
        else if(b>c && b>c && a>c)
            printf("Case %d: %d\n",i,a);
        else if(b>a && b>c && c>a)
            printf("Case %d: %d\n",i,c);
        else if(c>a && c>b && a>b)
            printf("Case %d: %d\n",i,a);
        else if(c>a && c>b && b>a)
            printf("Case %d: %d\n",i,b);
    }
    return 0;
}
