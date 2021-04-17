#include<stdio.h>
#include<string.h>
int main()
{
    int test,i,len;
    char s[10000];
    int dd[10000];
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        int j=0,p=0,max=0,c=0,ppp,k;
        gets(s);
        len=strlen(s);
        for(i=0; i<len; i++)
        {
            if(s[i]==32)
            {
                dd[j]=p;
                j++;
                p=0;
            }
            else
            {
                p=p*10+(s[i]-'0');
                //printf("%d\n",p);
            }

        }
        dd[j]=p;
        max=dd[0];
        for(i=0; i<=j; i++)
        {
            if(dd[i]>max)
                max=dd[i];
            {
                for(k=1; k<max; k++)
                {
                    for(i=0; i<=j; i++)
                    {
                        if(dd[i]%k==0)
                            c++;
                        if(c>=2)
                        {
                            ppp=k;
                            c=0;
                        }
                    }
                }

            }

        }
        printf("%d\n",ppp);
    }
}
