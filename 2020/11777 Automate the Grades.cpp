#include<stdio.h>
int main()
{
    int test,i,a,b,c,d,e,f,g,t=0,p=0;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        t=0,p=0;
        scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
        t=e;
        {
            if(t>f)
                t=f;
            if(t>g)
                t=g;
        }
        p=a+b+c+d+(e+f+g-t)/2;
        if(p>=90)
            printf("Case %d: A\n",i);
        else if(p>=80 && p<90)
            printf("Case %d: B\n",i);
        else if(p>=70 && p<80)
            printf("Case %d: C\n",i);
        else if(p>=60 && p<70)
            printf("Case %d: D\n",i);
        else if(p<60)
            printf("Case %d: F\n",i);
    }
    return 0;
}
