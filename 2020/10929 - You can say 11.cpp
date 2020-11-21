#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100000];
    int c,i,t;
    while(1)
    {
        t=-1,c=0;
        scanf("%s",&s);
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]-'0'==0)
                t++;
            c=(c*10+s[i]-'0')%11;
        }
       if(t==strlen(s)-1)
            break;
        if(c==0)
        {
            for(i=0; i<strlen(s); i++)
            {
                printf("%c",s[i]);
            }
            printf(" is a multiple of 11.\n");
        }
        else
        {
            for(i=0; i<strlen(s); i++)
            {
                printf("%c",s[i]);
            }
            printf(" is not a multiple of 11.\n");
        }
    }
    return 0;
}
