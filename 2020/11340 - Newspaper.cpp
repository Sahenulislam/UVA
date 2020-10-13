#include<stdio.h>
#include<string.h>
int main()
{
    char ss[100000];
    int len,t,k,m,i,j;
    double sum=0;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d",&k);
        int a[k];
        char s[k];
        for(i=0; i<k; i++)
        {
            scanf("%s %d",&s[i],&a[i]);
        }
        scanf("%d",&m);
        getchar();
        while(m--)
        {
            gets(ss);
            len=strlen(ss);
            for(i=0; i<k; i++)
            {
                for(j=0; j<len; j++)
                {
                    if(ss[j]==s[i])
                    {
                        sum=sum+a[i];
                    }
                }
            }
        }
        printf("%.2lf$\n",sum/100);
    }
    return 0;
}
