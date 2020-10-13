#include<bits\stdc++.h>
int main()
{
    long long int a,b,max,i,g,q,tt,min;
    while(scanf("%lld %lld",&a,&b)==2 && a>0 && b>0)
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
            g=1;
            q=i;
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
            if(g>=tt)
            {
                tt=g;
            }
        }
        printf("%lld %lld %lld\n",a,b,tt);
    }
    return 0;
}

