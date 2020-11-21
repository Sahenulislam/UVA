#include<iostream>
#include<stdio.h>
#include<map>
#include<iterator>
#include<string.h>
using namespace std;
map<string,int>mp;
map<string,int>::iterator it;
int main()
{
    string s,temp;
    int a=1,i;
    while(getline(cin,s))
    {
        int t=0;
        temp.clear();
        if(s=="0")
            break;
        for(i=0; i<s.size(); i++)
        {
            if(isupper(s[i]))
            {
                t++;
                temp+=s[i]+32;
            }
            else if(islower(s[i]))
            {
                t++;
                temp+=s[i];
            }
            else if(t)
            {
                t=0;
                mp.insert(make_pair(temp,a));
                temp.clear();
            }
        }
        if(temp!="")
            mp.insert(make_pair(temp,a));
    }
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<endl;
    }
    return 0;
}
