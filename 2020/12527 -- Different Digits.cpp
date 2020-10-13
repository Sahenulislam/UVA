#include<stdio.h>
#include<string.h>
int main()
{
    int t,N,M;
    while(scanf("%d %d",&N,&M)==2)
    {
        int i,j,q,ara[100000],gg=0;
        for(i=N; i<=M; i++)
        {
            int dd=i;
            int k=0,g=0;
            while(dd!=0)
            {
                ara[k]=dd%10;
                dd=dd/10;
                k++;
            }
            for(j=0; j<k; j++)
            {
                for(q=0; q<k; q++)
                {
                    if(q!=j && ara[q]==ara[j])
                    {
                        g++;
                        break;
                    }
                }
                if(g>0)
                    break;
            }
            if(g==0)
                gg++;
        }
        printf("%d\n",gg);
    }
    return 0;
}
