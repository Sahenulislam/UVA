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

    while(1)
    {
        ll n,d,r;
        cin>>n>>d>>r;
        if(n==0&&d==0&&r==0)
            break;

        multiset<ll>st;
        ll a[n+10],aa;
        for(ll i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(ll i=0; i<n; i++)
        {
            cin>>aa;
            st.insert(aa);
        }
        ll cost=0;
        for(ll i=n-1; i>=0; i--)
        {
            ll mo=a[i];
            ll dif=d-mo;
            auto it=st.upper_bound(dif);
            if(it==st.begin())
                it++;
            ll sum=*--it+mo;
            cout<<a[i]<<in<<*it<<endl;
            if(sum>d)
            {
                cost+=((sum-d)*r);
            }
            st.erase(it);
        }
        cout<<cost<<endl;
    }
    return 0;
}


