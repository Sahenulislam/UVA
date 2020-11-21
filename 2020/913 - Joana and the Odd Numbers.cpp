#include<iostream>
using namespace std;
int main()
{
    long int n,last_odd,sum;
    while(scanf("%ld",&n)==1)
    {
        last_odd=(n*(n+2))/2;
        sum=last_odd*3-6;
        printf("%ld\n",sum);
    }
    return 0;
}
