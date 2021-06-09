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
    while (1)
    {
        ll n,a;
        cin>>n;
        if(n==0)
            break;
        vector<ll>vec;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            if(a>0)
                vec.pb(a);
        }
        for(ll i=0; i<vec.size(); i++)
        {
            if(i==vec.size()-1)
                cout<<vec[i];
            else
                cout<<vec[i]<<in;
        }
        if(vec.size()==0)
            cout<<zero;
        cout<<endl;

    }
    return 0;
}


