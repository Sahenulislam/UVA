#include<stdio.h>
int main()
{
    int n,p,i,c=0;
    while(scanf("%d",&n)==1)
    {
        p=n;
        c=0;
        if(n==0)
            break;
        for(i=1; i<=n; i++)
        {
            if(i%3==0)
            {
                c++;
                n++;
            }
        }
        if(n%3==2)
            c++;
        printf("%d\n",p+c);
    }
    return 0;
}

