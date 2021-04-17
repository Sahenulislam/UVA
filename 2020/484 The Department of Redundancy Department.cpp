#include<iostream>
#include<map>
#include<iterator>
using namespace std;
map<int,int>mp;
map<int,int>::iterator it;
int main()
{
    long long int ll,a[10000],i=0,j;
    while(cin>>ll)
    {
        it=mp.find(ll);
        if(it!=mp.end())
        {
            it->second++;
        }
        else
        {
            mp[ll]=1;
            a[i++]=ll;
        }
    }
    for(j=0;j<i;j++)
        cout<<a[j]<<" "<<mp[a[j]]<<endl;
}
