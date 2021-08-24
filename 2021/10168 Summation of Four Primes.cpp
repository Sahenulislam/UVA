#include <bits/stdc++.h>
using namespace std;
#define ll int
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
const ll mx=1e7+5;
ll isprime[mx];
vector<ll>p;
void prime()
{
    for(ll i=4; i<=mx; i+=2)
        isprime[i]=1;
    for(ll i=3; i*i<=mx; i+=2)
    {
        if(isprime[i]==0)
        {
            for(ll j=i*i; j<=mx; j+=(i+i))
                isprime[j]=1;
        }
    }
    p.pb(2);
    for(ll i=3; i<=mx; i+=2)
    {
        if(isprime[i]==0)
            p.pb(i);
    }
    //cout<<p.size()<<endl;
}
int main()
{
    fast
    prime();
    ll n;
    while(cin>>n)
    {
        if(n<8)
        {
            cout<<"Impossible."<<"\n";
            continue;
        }
        if(n%2==0)
        {
            cout<<"2 2"<<in;
            n-=4;
        }
        else
        {
            cout<<"2 3"<<in;
            n-=5;
        }
        for(ll i=0; i<p.size(); i++)
        {
            if(isprime[n-p[i]]==0)
            {
                cout<<p[i]<<in<<n-p[i]<<"\n";
                break;
            }
        }
    }
    return 0;
}

