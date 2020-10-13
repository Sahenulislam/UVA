#include<stdio.h>
int main()
{
    long long int a,b,max,i,g=0,c,q,tt,min;
    while(scanf("%lld %lld",&a,&b)==2 && a!=0 && b!=0)
    {
        tt=0;
        if(a>=b)
        {
            max=a;
            min=b;
        }
        else
        {
            max=b;
            min=a;
        }
        for(i=min; i<=max; i++)
        {
            g=0;
            q=i;
            if(q==1)
            {
                g=3;
            }
            else
            {
                while(q>1)
            {
                if(q%2==0)
                {
                    q=q/2;
                    g++;
                }
                else
                {
                    q=(3*q)+1;
                    g++;
                }
            }
            }
            if(g>tt)
            {
                tt=g;
                c=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",min,max,c,tt);
    }
    return 0;
}
