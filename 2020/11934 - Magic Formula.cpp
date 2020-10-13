#include<stdio.h>
int main()
{
    int a,b,c,d,l,i;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        int MF,g=0;
        for(i=0;i<=l;i++)
        {
             MF=(a*i*i)+(b*i)+c;
            if(MF%d==0)
                g++;
        }
        printf("%d\n",g);
    }
    return 0;
}
