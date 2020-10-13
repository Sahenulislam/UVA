#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000],b[100000];
    int ts,len,lenn,v,c,ara[100000];
    scanf("%d",&ts);
    while(ts--)
    {
        scanf("%s %s",&a,&b);
        len=strlen(a)-1;
        lenn=strlen(b)-1;
        int carry=0,sum=0,i=0,j=0,w=0;
        while(len>=0||lenn>=0)
        {
            if(len>=0)
            {
                v=a[i]-'0';
                len--;
                i++;
            }
            else
                v=0;
            if(lenn>=0)
            {
                c=b[j]-'0';
                lenn--;
                j++;
            }
            else
                c=0;
            sum=v+c;
            ara[w]=(sum+carry)%10;
            carry=(sum+carry)/10;
            w++;
        }
        if(carry>0)
        {
            ara[w]=carry;
            w++;
        }
        int t;
        for(j=0; j<=w-1; j++)
        {
            if(ara[j]==0)
            {
                for(t=j-1; t>=0; t--)
                    if(ara[t]>0)
                    {
                        printf("%d",ara[j]);
                        break;
                    }
            }
            else
                printf("%d",ara[j]);
        }
        printf("\n");
    }
    return 0;
}
