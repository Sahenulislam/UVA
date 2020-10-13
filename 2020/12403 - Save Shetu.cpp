#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,rem=0,sum=0,j,len;
    char p[10000];
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(p);
        if(strcmp(p,"report")==0)
            printf("%d\n",sum);
        else
        {
            rem=0;
            len=strlen(p);
            for(j=0; j<len; j++)
            {
                if(p[j]>=48 && p[j]<=57)
                {
                    rem=rem*10+(p[j]-'0');
                }
            }
            sum=sum+rem;
        }
    }
    return 0;
}
