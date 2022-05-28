#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define pb push_back
const ll mxn=40000;
ll isp[mxn+10];
vector<ll>prime;
void siv()
{
    for(ll i=0; i<=mxn; i++)isp[i]=0;
    for(ll i=4; i<=mxn; i+=2)isp[i]=1;
    isp[0] = isp[1] = 1;
    for(ll i=3; i*i<=mxn; i+=2)
    {
        if(isp[i]==0)
        {
            for(ll j=i*i; j<=mxn; j+=(i+i))
                isp[j]=1;
        }
    }
    prime.pb(2);
    for(ll i=3; i<=mxn; i+=2)
    {
        if(isp[i]==0)
            prime.pb(i);
    }
}
ll Eluersphi(ll n)
{

    ll ans=n;
    for(ll i=0; prime[i]*prime[i]<=n&&i<prime.size(); i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
            }
            ans/=prime[i];
            ans*=(prime[i]-1);
        }
    }
    if(n>1)
    {
        ans/=n;
        ans*=(n-1);
    }
    return ans;

}

int main()
{
    fast
    siv();
    ll n;
    while(cin>>n)
    {
        if(n==0)break;
        if(n==1)
            cout<<"0"<<endl;
        else
            cout<<Eluersphi(n)<<endl;
    }
    return 0;
}
