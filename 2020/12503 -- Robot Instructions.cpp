#include<stdio.h>
#include<string.h>
int main()
{
    int ts,n;
    char c[100000];
    scanf("%d",&ts);
    while(ts--)
    {
        int i=0,g=0;
        scanf("%d",&n);
        int ara[10000];
        for(i=0; i<=110; i++)
            ara[i]=0;
        getchar();
        i=0;
        while(n--)
        {
            gets(c);
            if(c[0]=='L')
            {
                g--;
                ara[i]=0;
                i++;
            }
            else if(c[0]=='R')
            {
                g++;
                ara[i]=1;
                i++;
            }
            else if(c[0]=='S')
            {
                int m=strlen(c)-9;
                int rem=0,j=8;
                while(m>=0)
                {
                    rem=rem*10+c[j]-'0';
                    m--;
                    j++;
                }
                if(ara[rem-1]==1)
                {
                    g++;
                    ara[i]=1;
                    i++;
                }
                else if(ara[rem-1]==0)
                {
                    g--;
                    ara[i]=0;
                    i++;
                }
            }
        }
        printf("%d\n",g);
    }
    return 0;
}
