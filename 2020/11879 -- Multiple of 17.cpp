#include<stdio.h>
#include<string.h>
int main()
{
   char ss[100000];
   int c,i;
   while(scanf("%s",&ss)!=EOF)
    {
        c=0;
        if(ss[0]=='0'&&strlen(ss)==1)
            break;
        for(i=0;i<strlen(ss);i++)
            c=(c*10+ss[i]-'0')%17;
        if(c==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
