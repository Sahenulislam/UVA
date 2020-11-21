#include<stdio.h>
#include<math.h>
int main()
{
    long int n,q,tt,m,nn,cc=0,i,y;
    long double p;
    while(scanf("%ld",&n)==1 && n!=0)
    {
        cc=0;
        p=sqrt(n);
        q=p;
        p=p-q;
        if(p==0)
        {
            y=q;
        }
        else
            y=q+1;
        tt=n-((y-1)*(y-1));
        if(tt>y)
        {
            m=y;
            nn=tt-y;
            nn=y-nn;
            cc=1;
        }
        else
            nn=tt;
        for(i=1; i<=y; i++)
        {
            if(i==nn)
                break;
        }
        if(y%2==0)
        {
            if(cc==0)
                printf("%ld %ld\n",i,y);
            else
                printf("%ld %ld\n",y,i);
        }
        else if(y%2!=0)
        {
            if(cc==1)
                printf("%ld %ld\n",i,y);
            else
                printf("%ld %ld\n",y,i);
        }
    }
    return 0;
}
