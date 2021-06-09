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
    ll n,m;
    while (cin>>n>>m)
    {
        ll a,b,point=0;
        vector<ll>vec;
        for(ll i=0;i<n;i++)
        {
            cin>>a>>b;
            if(a>b)
            {
                 point+=3;
                 continue;
            }
            if(b-a==0&&m>0)
            {
                point+=3;
                m--;
                continue;
            }
            vec.pb(b-a);
        }
        sort(vec.begin(),vec.end());
        for(ll i=0;i<vec.size();i++)
        {
            if(m==0&&vec[i]>0)
                break;
            if(vec[i]>m)
                break;
            else if(vec[i]==m)
            {
                point+=1;
                m-=vec[i];
            }
            else
            {
                m-=vec[i]+1;
                point+=3;
            }
        }
        cout<<point<<endl;

    }
    return 0;
}



