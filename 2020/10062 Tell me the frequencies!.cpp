#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    int i,j,max,t=0;
    while(gets(s))
    {
        if(t!=0)
            printf("\n");
        int a[140]= {0};
        for(i=0; i<strlen(s); i++)
        {
            a[s[i]]++;
        }
        max=a[0];
        for(i=1; i<130; i++)
        {
            if(a[i]>max)
                max=a[i];
        }
        for(j=1; j<=max; j++)
        {
            for(i=140; i>=0; i--)
            {
                if(a[i]==j)
                {
                    printf("%d %d\n",i,a[i]);
                }
            }
        }
        t++;
    }
    return 0;
}
