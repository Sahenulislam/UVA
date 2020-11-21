#include<stdio.h>
int main()
{
    long long int i,j,p,r;
    while(scanf("%lld %lld",&i,&j)==2)
    {
        if(i==0 && j==0)
            break;
        long long int count=0,flag=0,uu;
        long long int rem,gg;
        long long int a,b;
        a=i;
        b=j;
        while(a>0 || b>0)
        {
            rem=a%10;
            a=a/10;
            gg=b%10;
            b=b/10;
            if(flag>0)
                uu=rem+gg+1;
            else
                uu=rem+gg;
            flag=0;
            if(uu>=10)
            {
                count++;
                flag++;
            }
        }
        if(count==0 || i==0 || j==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("%lld carry operation.\n",count);
        else
            printf("%lld carry operations.\n",count);
    }
    return 0;
}
