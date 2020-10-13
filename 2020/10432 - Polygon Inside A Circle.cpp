#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double r,pi=3.1415926535897932384626433832795;
    while(scanf("%lf %d",&r,&n)==2)
    {
        printf("%.3lf\n",.5*r*r*n*sin(2*pi/n));
    }
    return 0;
}
