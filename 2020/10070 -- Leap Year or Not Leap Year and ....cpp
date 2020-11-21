#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char n[100000];
    int i=0,l,l2,l3,h,b,j;
    while(scanf("%s",&n)!=EOF)
    {
        if(i!=0)
            printf("\n");
        i=0,l=0,l2=0,l3=0,h=0,b=0;
        for(j=0; j<strlen(n); j++)
        {
            l=(l*10+n[j]-'0')%400;
            l2=(l2*10+n[j]-'0')%4;
            l3=(l3*10+n[j]-'0')%100;
            h=(h*10+n[j]-'0')%15;
            b=(b*10+n[j]-'0')%55;
        }
        if((l2==0 && l3%100!=0)||l%400==0)
        {
            i++;
            printf("This is leap year.\n");
            {
                if(h==0)
                {
                    printf("This is huluculu festival year.\n");
                }
                if(b==0)
                {
                    printf("This is bulukulu festival year.\n");
                }
            }
        }
        else if(h==0)
        {
            i++;
            printf("This is huluculu festival year.\n");
        }
        if(i==0)
        {
            i++;
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
