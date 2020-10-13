#include<stdio.h>
int main()
{
    int a,b,r,dd,max,min,c;
    while(scanf("%d %d",&a,&b)==2 && a!=-1 && b!=-1)
    {
        if(a>=b)
        {
            max=a;
            min=b;
            c=max-min;
        }
        else
        {
            max=b;
            min=a;
            c=max-min;
        }
        r=100-max+min;
        if(r>=c)
            dd=c;
        else
            dd=r;
        printf("%d\n",dd);
    }
    return 0;
}
