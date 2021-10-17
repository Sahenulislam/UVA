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
const ll mx=1e6;
ll a[mx+2];
vector<pair<ll,ll>>st(mx*4);
pair<ll,ll> marge(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.first>b.first)return a;
    if(a.first<b.first)return b;
    if(a.second>b.second)return a;
    return b;
}
void build(ll cur,ll left,ll right)
{
    if(left==right)
    {
        st[cur].first=a[left];
        st[cur].second=left;
        return;
    }
    ll mid=(left+right)/2;
    build(cur*2,left,mid);
    build(cur*2+1,mid+1,right);
    st[cur]=marge(st[cur*2],st[cur*2+1]);
}
pair<ll,ll> query(ll cur,ll left,ll right,ll l,ll r)
{
    if(l>right||r<left)return {0,0};
    if(l<=left&&right<=r)return st[cur];
    ll mid=(left+right)/2;
    pair<ll,ll> x=query(cur*2,left,mid,l,r);
    pair<ll,ll> y=query(cur*2+1,mid+1,right,l,r);
    return marge(x,y);
}
int main()
{
    for(ll i=1; i<=mx; i++)
    {
        for(ll j=i; j<=mx; j+=i)
        {
            a[j]++;
        }
    }
    build(1,1,mx);
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        pair<ll,ll> x=query(1,1,mx,1,n);
        cout<<x.second<<endl;
    }
    return 0;
}

