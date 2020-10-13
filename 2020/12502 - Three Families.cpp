#include<stdio.h>
int main()
{
    float t,x,y,v,p,r,z;
    scanf("%f",&t);
    while(t--)
    {
        scanf("%f %f %f",&x,&y,&z);
        p=(x+y)/3;
        r=z/p;
        v=(x-p)*r;
        if(v<=0)
            printf("0\n");
        else
            printf("%.f\n",v);
    }
    return 0;
}
