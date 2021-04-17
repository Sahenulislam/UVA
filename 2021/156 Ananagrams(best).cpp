#include<bits/stdc++.h>
using namespace std;
map<string,string>mp1;
map<string,int>mp2;
map<string,int>::iterator it;
int main()
{
    string s;
    while(1)
    {
        string s1;
        cin>>s;
        if(s=="#")
            break;
        s1=s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        sort(s.begin(),s.end());
        if(mp1.find(s)!=mp1.end())
            mp2[mp1[s]]++;
        else
        {
            mp1[s]=s1;
            mp2[s1]=1;
        }
    }
    for(it=mp2.begin(); it!=mp2.end(); it++)
        if(it->second==1)
            cout<<it->first<<endl;
    return 0;
}
