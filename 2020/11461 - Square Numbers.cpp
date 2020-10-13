#include<stdio.h>
int main()
{
    int a,b,i,g=0;
    while(scanf("%d %d",&a,&b)==2 && a!=0 && b!=0)
    {
        g=0;
        for(i=a; i<=b; i++)
        {
                if(i*i<=b)
                {
                    g++;
                }
        }
        printf("%d\n",g);
    }
    return 0;
}
