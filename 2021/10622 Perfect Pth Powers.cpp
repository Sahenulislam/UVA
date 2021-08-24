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
    while(cin>>n&&n!=0)
    {
        ll cnt,sum,f=0;
        ll nn=abs(n);
        for(ll i=2;i<48000;i++)
        {
            sum=1;
            cnt=0;
            while(nn>=sum)
            {
                if(sum==nn)
                {
                    if(n<0&&cnt%2==0)
                        break;
                    cout<<cnt<<endl;
                    f=1;
                    break;
                }
                sum*=i;
                cnt++;
            }
            if(f==1)
                break;
        }
        if(f!=1)
            cout<<one<<endl;
    }
    return 0;
}

