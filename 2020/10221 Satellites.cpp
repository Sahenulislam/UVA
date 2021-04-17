#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,pi=acos(-1);
    string s;
    while(cin>>a>>b>>s)
    {
        c=0,d=0;
        a=a+6440;
        if(s=="min")
            b=b/60;
        while(b>=360)
        {
            b=b-360;
        }
        if(b>180)
            b=abs(360-b);
        c=2*pi*a*(b/360);
        d=sqrt((2*a*a)-((cos((b*pi)/180)*(2*a*a))));
        printf("%.6lf %.6lf\n",c,d);
        s.clear();
    }
    return 0;
}
