#include<stdio.h>
int main()
{
    int H1,M1,H2,M2,i,q=0,r,c=0,p=0;
    while(scanf("%d %d %d %d",&H1,&M1,&H2,&M2)==4)
    {
        if(H1==0 && M1==0 && H2==0 && M2==0)
            break;
        q=0;
        c=(H1*60)+M1;
        p=(H2*60)+M2;
        while(c!=p)
        {
            q++;
            if(c==1440)
            {
                q--;
                c=0;
            }
            else
                c++;
        }
        printf("%d\n",q);
    }
    return 0;
}
