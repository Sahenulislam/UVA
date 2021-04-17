#include<iostream>
#include<cmath>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int p[11111111],prime[11111111];
void siv()
{
    int sq,i,j,t=1;
    prime[t]=2;
    sq=sqrt(1000001111);
    for(i=3; i<=sq; i+=2)
    {
        if(p[i]==0)
        {
            t++;
            prime[t]=i;
            for(j=i*i; j<=sq; j+=i)
            {
                p[j]=1;
            }
        }
    }
    cout<<t<<endl;
}
int main()
{
    fast
    siv();
    long long int t,i,l,u,ll,y;
    int j;
    cin>>t;
    while(t--)
    {
        int maxd=-11111;
        cin>>l>>u;
        for(i=l; i<=u; i++)
        {
            ll=i;;
            int divi=1;
            for(j=1; j<=3401; j++)
            {
                int pow=1;
                while(ll%prime[j]==0)
                {
                    ll/=prime[j];
                    pow++;
                    if(ll==1)
                        break;
                }
                divi*=pow;
                if(ll==1)
                    break;
            }
            if(maxd<divi)
            {
                maxd=divi;
                y=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %d divisors.\n",l,u,y,maxd);
    }
    return 0;
}
