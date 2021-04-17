#include<iostream>
#include<map>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
map<char,int>mp{{'B',1},{'F',1},{'P',1},{'V',1},{'C',2},{'G',2},{'J',2},{'K',2},{'Q',2},{'S',2},{'X',2},{'Z',2},{'D',3},{'T',3},{'L',4},{'M',5},{'N',5},{'R',6}};
int main()
{
    fast
    int i;
    string s;
    while(cin>>s)
    {
        if(mp[s[0]])
        {
            cout<<mp[s[0]];
        }
        for(i=1; i<=s.size(); i++)
        {
            if(mp[s[i]])
            {
                if(mp[s[i-1]]!=mp[s[i]])
                {
                   cout<<mp[s[i]];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
