#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100000];
    long int i,len,c=0;
    while(gets(ch))
    {
        len=strlen(ch);
        for(i=0; i<len; i++)
        {
            if(ch[i]=='"')
            {
                c++;
                if(c%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",ch[i]);
        }
        printf("\n");
    }
    return 0;
}

