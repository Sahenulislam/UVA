#include<iostream>
#include<map>
#include<iterator>
using namespace std;
map<string,int>m;
map<string,int>::iterator it;
int main()
{
    int a,i;
    string s,temp;
    while(cin>>a>>s)
    {
        m.clear();
        for(i=0;i<s.size();i++)
        {
            temp=s.substr(i,a);
            it=m.find(temp);
            if(it==m.end())
            {
                m.insert(make_pair(temp,1));
            }
            else
            {
                it->second++;
            }
        }
        int max=0;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second>max)
            {
                 max=it->second;
                 temp=it->first;
            }

        }
        cout<<temp<<endl;
    }
    return 0;
}
