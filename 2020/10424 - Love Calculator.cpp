#include<stdio.h>
#include<string.h>
#include<ctype.h>
int ss(int d)
{
    int c=0;
    while(d>0)
    {
        d=d/10;
        c++;
    }
    return c;
}
int dd(int rr,char dd[100])
{
    int i,v=0;
    for(i=0; i<rr; i++)
    {
        if((dd[i]>=65 && dd[i]<=90)||(dd[i]>=97 && dd[i]<=122))
        {
            if(isupper(dd[i]))
            {
                v+=((dd[i]-'A')+1);
            }
            else
                v+=((dd[i]-'a')+1);
        }
    }
    return v;
}
int tt(int r)
{
    int h=0,uu;
    while(1)
    {
        h=0;
        while(r>0)
        {
            h+=r%10;
            r=r/10;
        }
        uu=ss(h);
        if(uu<2)
            break;
        else
            r=h;
    }
    return h;
}
int main()
{
    char pp[100],bb[100],g='%';
    int ll,k,a,b,sum=0,summ=0,i;
    double hh;
    while(gets(pp))
    {
        gets(bb);
        ll=strlen(pp);
        k=strlen(bb);
        a=dd(ll,pp);
        sum=tt(a);
        b=dd(k,bb);
        summ=tt(b);
        if(sum<=summ)
            hh=(double)(sum*100)/summ;
        else
            hh=(double)(summ*100)/sum;
        printf("%.2lf %c\n",hh,g);
    }
    return 0;
}
