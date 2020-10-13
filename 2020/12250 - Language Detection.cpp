#include<stdio.h>
#include<string.h>
int main()
{
    char s[15];
    int count=1;
    while(scanf("%s",s))
    {
        if(strcmp(s,"#")==0)
            break;
        if(strcmp(s,"HELLO")==0)
            printf("Case %d: ENGLISH\n",count++);
        else if(strcmp(s,"HOLA")==0)
            printf("Case %d: SPANISH\n",count++);
        else if(strcmp(s,"HALLO")==0)
            printf("Case %d: GERMAN\n",count++);
        else if(strcmp(s,"BONJOUR")==0)
            printf("Case %d: FRENCH\n",count++);
        else if(strcmp(s,"CIAO")==0)
            printf("Case %d: ITALIAN\n",count++);
        else if(strcmp(s,"ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n",count++);
        else
            printf("Case %d: UNKNOWN\n",count++);
    }
    return 0;
}





