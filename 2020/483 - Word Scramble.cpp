#include<stdio.h>
#include<string.h>
int main()
{
    char ss[100000],ch;
    int i,len;
    while(scanf("%s",&ss)!=EOF)
    {
        scanf("%c",&ch);
        len=strlen(ss);
        for(i=len-1;i>=0;i--)
        {
            printf("%c",ss[i]);
        }
        printf("%c",ch);
    }
    return 0;
}
