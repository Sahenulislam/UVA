#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define inco " "

int main()
{
    ll n,t=1;
    while(cin>>n)
    {
        ll a[n+10],flag=0;
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
            cin>>a[i];
        cout<<"Case #"<<t++<<": ";
        for(ll i=0; i<n-1; i++)
        {
            if(a[i]>=a[i+1]||a[0]<1)
            {
                cout<<"It is not a B2-Sequence."<<endl<<endl;
                flag=1;
                break;
            }
        }
        if(flag==1)
            continue;
        for(ll i=0; i<n; i++)
        {
            for(ll j=i; j<n; j++)
            {
                if(mp.find(a[i]+a[j])==mp.end())
                    mp[a[i]+a[j]]=1;
                else
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"It is not a B2-Sequence."<<endl<<endl;
                break;
            }
        }
        // for(auto i: mp)
        //    cout<<i.first<<endl;
        if(flag==0)
            cout<<"It is a B2-Sequence."<<endl<<endl;
    }
    return 0;
}


