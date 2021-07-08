#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
//long long lcm(ll a, ll b)
//{
//    return (a / (__gcd(a, b))) * b;
//}
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
#define endll endl;
const int mxN = 105;
bool isp[mxN + 1];
vector <int> prime;
int nod[1000000+3];
void Sieve()
{
    for (int i = 0; i <= mxN; i++) isp[i] = 0;
    for (int i = 4; i <= mxN; i += 2) isp[i] = 1;
    for (int i = 3; i * i <= mxN; i += 2)
    {
        if (isp[i] == 0)
        {
            for (int j = i * i; j <= mxN; j += i + i)
            {
                isp[j] = 1;
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= mxN; i += 2)
    {
        if (isp[i] == 0) prime.push_back(i);
    }
}


int main()
{
    //fast
    Sieve();
    int n;
    while(cin>>n)
    {
        int a[105]= {0},mx=-1,c,tt=0;
        if(n==0)
            break;
        for(int i=2; i<=n; i++)
        {
            c=i;
            for(int j=0; prime[j]*prime[j]<=i&&j<prime.size(); j++)
            {
                while(c%prime[j]==0)
                {
                    c/=prime[j];
                    a[prime[j]]++;
                    mx=max(mx,prime[j]);
                }
            }
            if(c!=1)
            {
                a[c]++;
                mx=max(mx,c);
            }
        }
        string s=to_string(n);
        if(s.size()==1)
            cout<<"  "<<n<<"! =";
        else if(s.size()==2)
            cout<<" "<<n<<"! =";
        else
            cout<<n<<"! =";
        for(int i=2; i<=mx; i++)
        {
             if(tt==15)
             {
                 cout<<"\n      ";
                 tt=0;

             }

            //cout<<in<<i<<in;
            string s=to_string(a[i]);
            if(isp[i]==1)
            {

            }
            else if(s.size()==2)
            {
                 cout<<" "<<a[i];
                 tt++;
            }

            else if(s.size()==1)
            {
                cout<<"  "<<a[i];
                tt++;
            }

        }
        cout<<"\n";
    }
    return 0;
}

