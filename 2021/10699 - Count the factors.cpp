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
    ll n;
    while(cin>>n)
    {
        if(n==0)break;
        ll n1=n;
        set<ll>st;
        for(ll i=2;i*i<=n;i++)
        {
            while(n%i==0)
            {
                st.insert(i);
                n/=i;
            }
        }
        if(n>1)st.insert(n);
        cout<<n1<<" : "<<st.size()<<endl;
    }
    return 0;
}
