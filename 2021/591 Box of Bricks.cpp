#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define INF        9223372036854775806
#define MINF       -9223372036854775806
#define eps          1e-8
#define gcd __gcd
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)
#define endl "\n"
int main()
{
    ll n,t=1;
    while(cin>>n&&n!=0)
    {
        ll av,sum=0,ans=0;
        ll a[n+10];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        av=sum/n;
        for(ll i=0;i<n;i++)
        {
            if(a[i]>av)
                ans+=a[i]-av;
        }
        cout<<"Set #"<<t++<<endl;
        cout<<"The minimum number of moves is "<<ans<<"."<<endl;
        cout<<endl;
    }
    return 0;
}

