#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        vector<ll>v;
        cin>>a;
        if(a==1||a==0)
        {
            cout<<a<<endl;
            continue;
        }
        for(ll i=9; i>=2; i--)
        {
            while(a%i==0)
            {
                a/=i;
                v.pb(i);
            }
        }
        if(a!=1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        for(ll i=0; i<v.size(); i++)
            cout<<v[i];
        cout<<endl;

    }
    return 0;
}

