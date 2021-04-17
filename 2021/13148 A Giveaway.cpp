#include<bits/stdc++.h>
using namespace std;
vector<long long>vec;
map<long long,long long>mp;
map<long long,long long>mi;
void squere()
{
    long long i=1;
    while(i*i*i<=100000000)
    {
        mp[i*i*i]=1;
        i++;
    }
    i=1;
    long long sum;
    while(i*i<=100000000)
    {
        sum=i*i;
        if(mp.find(sum)!=mp.end())
            mi[sum]=1;
            i++;
    }
}
int main()
{
    squere();
    long long t;
    while(cin>>t&&t!=0)
    {
        if(mi.find(t)!=mi.end())
            cout<<"Special"<<endl;
        else
            cout<<"Ordinary"<<endl;
    }
    return 0;
}
