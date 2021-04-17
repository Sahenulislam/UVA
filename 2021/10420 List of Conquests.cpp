#include<iostream>
#include<map>
#include<iterator>
using namespace std;
map<string,int>mp;
map<string,int>::iterator it;
int main()
{
    int t,i;
    cin>>t;
    getchar();
    while(t--)
    {
        int ll=0;
        string s,temp;
        getline(cin,s);
        for(i=0; i<s.size(); i++)
        {
            if(ll==1&&s[i]==' ')
                break;
            else if(s[i]!=' ')
            {
                ll=1;
                temp+=s[i];
            }

        }
        it=mp.find(temp);
        if(it!=mp.end())
        {
            mp[temp]++;
        }
        else
            mp[temp]=1;
    }
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
