#include<stdio.h>
int main()
{
    int T,a,b,c,i=1;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a<=20 && b<=20 && c<=20)
            printf("Case %d: good\n",i++);
        else
            printf("Case %d: bad\n",i++);
    }
    return 0;
}
