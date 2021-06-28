#include<iostream>
using namespace std;
int main()
{
    long long int b,p,m,dd;
    while(cin>>b>>p>>m)
    {
        dd=((b%m)*(p%m))%m;
        cout<<dd<<endl;
    }
}
