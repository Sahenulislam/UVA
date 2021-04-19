#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t=1;
    while(cin>>n)
    {
        ll a[n+10],mx=LONG_MIN;
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        cout<<"Case #"<<t++<<": "<<"The maximum product is ";
        for(ll i=1;i<=n;i++)
        {
            ll sum=1;
            for(ll j=i;j<=n;j++)
            {
                sum*=a[j];
                if(mx<sum)
                    mx=sum;
            }
        }
        if(mx<0)
            cout<<"0."<<endl<<endl;
        else
        cout<<mx<<"."<<endl<<endl;
    }
    return 0;
}
