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
#define pir pair<ll,ll>
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)
#define endl "\n"
const ll mod=1e9+7;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x1,x2,y1,y2;
        cin>>n;
        ll a[n+10];
        priority_queue<pir>q;
        vector<pir>v;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            q.push({a[i],i+1});
        }
        while(1)
        {
            x1=q.top().first;
            x2=q.top().second;
            q.pop();
            y1=q.top().first;
            y2=q.top().second;
            q.pop();
            if(x1==0||y1==0)break;
            else
            {
                v.pb({x2,y2});
                x1--;
                y1--;
                q.push({x1,x2});
                q.push({y1,y2});
            }
        }
        cout<<v.size()<<endl;
        for(ll i=0; i<v.size(); i++)
            cout<<v[i].first<<in<<v[i].second<<endl;

    }
    return 0;
}
