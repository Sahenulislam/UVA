#include<stdio.h>
int main()
{
    int n,p;
    while(scanf("%d",&n)==1 && n!=0)
    {
        p=n;
        if(n>=101)
            printf("f91(%d) = %d\n",p,n-10);
        else if(n<=100)
        {
            while(n<=100)
            {
                n=n+11;
                if(n>=101)
                    n=n-10;
            }
            printf("f91(%d) = %d\n",p,n-10);
        }
    }
    return 0;
}
