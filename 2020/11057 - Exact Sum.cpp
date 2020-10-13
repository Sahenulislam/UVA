#include<stdio.h>
int main()
{
    int test,n,m,i=0,c,max=0,min=0,d=0,minimum,zz,xx,j,k;
    while(scanf("%d",&test)!=EOF)
    {
        int a[100000],i=0;
        while(test--)
        {
            scanf("%d",&n);
            a[i]=n;
            i++;
        }
        scanf("%d",&m);
        minimum=m;
        for(j=0; j<i; j++)
        {
            for(k=0; k<i; k++)
            {
                if(i!=j)
                {
                    c=a[j]+a[k];
                    if(c==m)
                    {
                        if(a[j]>a[k])
                        {
                            max=a[j];
                            min=a[k];
                        }
                        else
                        {
                            max=a[k];
                            min=a[j];
                        }
                        d=max-min;
                        if(minimum>d)
                        {
                            minimum=d;
                            zz=max;
                            xx=min;
                        }
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",xx,zz);
    }
    return 0;
}
