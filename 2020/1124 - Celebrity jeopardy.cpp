#include<stdio.h>
#include<string.h>
int main()
{
    char p[10000];
    while(gets(p))
    {
        printf("%s\n",p);
    }
    return 0;
}
