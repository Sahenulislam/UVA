#include<bits/stdc++.h>
using namespace std;

int compare(pair<string,pair<int,int>>a,pair<string,pair<int,int>>b)
{
    if(a.second.first!=b.second.first)
        return (a.second.first<b.second.first);
    else
    {
        if(a.second.second==b.second.second)
            return (a.first>b.first);
        else
            return (a.second.second>b.second.second);
    }

}
int main()
{
    int t,tt=1;
    cin>>t;
    while(t--)
    {
        string s;
        int a,b;
        vector<pair<string,pair<int,int>>>vec;
        multimap<string,int>mp;
        multimap<string,int>:: iterator it,ei;
        multimap<string,int>mp1;
        multimap<string,int>:: iterator iit,ii;
        for(int i=0; i<10; i++)
        {
            cin>>s>>a>>b;
            vec.push_back({s,{a,b}});
        }
        sort(vec.begin(),vec.end(),compare);
//        for(int i=0; i<vec.size(); i++)
//        {
//            cout<<vec[i].second.first<<"       "<<vec[i].second.second<<endl;
//        }
        for(int i=9; i>=5; i--)
            mp.insert(pair<string,int>(vec[i].first,1));
        for(int i=4; i>=0; i--)
            mp1.insert(pair<string,int>(vec[i].first,1));
        cout<<"Case "<<tt++<<":"<<endl;
        cout<<"(";
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            ei=it;
            ei++;
            if(ei==mp.end())
                cout<<it->first<<")"<<endl;
            else
                cout<<it->first<<", ";
        }
        cout<<"(";
        for(iit=mp1.begin(); iit!=mp1.end(); iit++)
        {
            ii=iit;
            ii++;
            if(ii==mp1.end())
                cout<<iit->first<<")"<<endl;
            else
                cout<<iit->first<<", ";
        }
    }
    return 0;
}
