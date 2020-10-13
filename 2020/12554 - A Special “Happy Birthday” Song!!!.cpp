#include<stdio.h>
#include<string.h>
int main()
{
    char st[1000][1000];
    char s[16][50]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    int test,i,j,h=0,q=0;
    scanf("%d",&test);
    for(j=0; j<test; j++)
    {
        scanf("%s",st[j]);
    }
    j=0,i=0;
    while(1)
    {
        printf("%s: %s\n",st[j],s[i]);
        j++;
        i++;
        if(j==test)
        {
            j=0;
            q=1;
        }
        if(i==16)
        {
            i=0;
            h=1;
        }
        if(q>=1 && h>=1 && i==0)
        {
            break;
        }
    }
    return 0;
}
