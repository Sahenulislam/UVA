#include<bits/stdc++.h>
using namespace std;

int maxs=5000020;
int prime[50005000];
vector<int>prfac;
void siv()
{
    int sq=sqrt(maxs);
    for(int i=4; i<=maxs; i+=2)
        prime[i]=1;
    for(int i=3; i<=sq; i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=maxs; j+=i+i)
                prime[j]=1;
        }
    }
    prime[1]=1;
    for(int i=2; i<=maxs; i++)
    {
        if(prime[i]==0)
            prfac.push_back(i);
    }
}

int primefactor(int n)
{
    int mo=0;
    if(prime[n]==0)
        return 1;
    int sq=sqrt(n);
    for(int i=0; prfac[i]<=sq&&i<prfac.size(); i++)
    {
        int sum=0;
        int kk=prfac[i];
        while(n%kk==0)
        {
            n=n/kk;
            sum=kk;
        }
        mo+=sum;
        if(prime[n]==0&&n!=1)
        {
            mo+=n;
            break;
        }
    }
    if(prime[mo]==0)
        return 1;
    else
        return 0;
}

int a[50000200];
void predeprime()
{
    int sum=0;
    for(int i=2; i<=maxs; i++)
    {
        sum+=primefactor(i);
        a[i]=sum;
    }
}

int main()
{
    siv();
    predeprime();
    int l,b;
    while(cin>>l)
    {
        if(l==0)
            break;
        cin>>b;
        cout<<a[b]-a[l-1]<<endl;
    }
    return 0;
}
