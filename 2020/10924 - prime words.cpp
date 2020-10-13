#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char pp[100];
    int i,sum=0,c=0;
    while(scanf("%s",&pp)!=EOF)
    {
        c=0,sum=0;
        for(i=0; pp[i]!='\0'; i++)
        {
            if(isupper(pp[i]))
                sum+=((pp[i]-'A')+27);
            else
                sum+=((pp[i]-'a')+1);
        }
        for(i=2; i<=sum/2; i++)
        {
            if(sum%i==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
