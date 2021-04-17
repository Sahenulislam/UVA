#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,mn=LONG_MAX,sum=0;
        cin>>n;
        ll a[n+10];
        for(ll i=0; i<n; i++)
            cin>>a[i];
        for(ll i=0; i<n; i++)
        {
            sum=0;
            for(ll j=0; j<n; j++)
            {
                if(i!=j)
                {
                    sum+=abs(a[j]-a[i]);
                }
            }
            mn=min(sum,mn);
        }
        cout<<mn<<endl;
    }
    return 0;
}
