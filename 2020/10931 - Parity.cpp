#include<stdio.h>
int main()
{
    int p[10000],n,i=0,rem=0,j,c=0;
    while(scanf("%d",&n)==1 && n!=0)
    {
        rem=0,i=0,c=0;
        while(n!=0)
        {
            p[c]=n%2;
            if(n%2==1)
            {
                i++;
            }
            n=n/2;
            c++;
        }
        printf("The parity of ");
        for(j=c-1; j>=0; j--)
        {
            printf("%d",p[j]);
        }
        printf(" is %d (mod 2).\n",i);
    }
    return 0;
}
