#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int count=1;
    while(scanf("%s",&str))
    {
        if(!strcmp(str,"*"))
            break;
        else if(!strcmp(str,"Hajj"))
        {
            printf("Case %d: Hajj-e-Akbar\n",count);
            count++;
        }
        else if(!strcmp(str,"Umrah"))
        {
            printf("Case %d: Hajj-e-Asghar\n",count);
            count++;
        }
    }
    return 0;
}
