#include<stdio.h>
int main()
{
    int t,n,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        p=(((((((n*567)/9)+7492)*235)/47)-498)/10)%10;
        if(p<0)
            p=p*(-1);
        printf("%d\n",p);
    }
    return 0;
}
