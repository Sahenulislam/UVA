#include<stdio.h>
int main()
{
    int n,i,j,k,g=0,p;
    while(scanf("%d",&n)==1 && n!=0)
    {
        g=0;
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                for(k=1; k<=i && k<=j; k++)
                {
                    if(i%k==0 && j%k==0)
                    {
                        p=k;
                    }
                }
                g=g+p;
            }
        }
        printf("%d\n",g);
    }
    return 0;
}
