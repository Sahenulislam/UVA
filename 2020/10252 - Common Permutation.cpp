#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000],ss[100000],q[100000],sss[10000];
    int len,lenn,i,j,k,u;
    while(gets(s))
    {
        gets(ss);
        if(s[0]=='\0'||ss[0]=='\0')
        {
            printf("\n");
        }
        else
        {
            k=0,u=0;
            len=strlen(s);
            lenn=strlen(ss);
            for(i=0; i<len; i++)
            {
                for(j=0; j<lenn; j++)
                {
                    if(ss[j]==s[i])
                    {
                        sss[k]=ss[j];
                        ss[j]='A';
                        k++;
                        break;
                    }
                }
            }
            for(i=97; i<=122; i++)
            {
                for(j=0; j<k; j++)
                {
                    if(sss[j]==i)
                    {
                        q[u]=sss[j];
                        u++;
                    }
                }
            }
            for(i=0; i<u; i++)
                printf("%c",q[i]);
            printf("\n");
        }
    }
    return 0;
}

