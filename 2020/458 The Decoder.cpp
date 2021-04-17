#include<iostream>
#include<string.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    char s[1000000];
    int i;
    while(scanf("%s",s)==1)
    {
        for(i=0; i<strlen(s); i++)
        {
                printf("%c",s[i]-7);
        }
        printf("\n");
    }
    return 0;
}

