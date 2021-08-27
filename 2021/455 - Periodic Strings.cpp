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
    fast
    ll t,tt=1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll mn=s.size(),j;
        for(ll k=1; k<=s.size()/2; k++)
        {
            string m=s.substr(0,k);
            for(j=k; j<s.size(); j+=k)
            {
                if(m!=s.substr(j,k))
                    break;
            }
            if(j==s.size())
            {
                mn=k;
                break;
            }
        }
        if(tt!=1)
            cout<<endl;
        cout<<mn<<endl;
        tt++;
    }

    return 0;
}
