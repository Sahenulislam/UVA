#include<iostream>
#include<map>
#include<iterator>
#include<string>
using namespace std;
int main()
{
    map<string,int>mp;
    map<string,int>::iterator it;
    string s,temp,temp1;
    int i,j,tt;
    while(cin>>s)
    {
        tt=0;
        for(i=0; i<s.size(); i++)
        {
            for(j=0; j<s.size(); j++)
            {
                temp=s.substr(i,j+1);
                mp.insert(make_pair(temp,1));
            }
        }
        temp.clear();
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            temp=it->first;
            for(i=temp.size()-1; i>=0; i--)
            {
                temp1+=temp[i];
            }
            if(temp==temp1)
                tt++;
            temp.clear();
            temp1.clear();
        }
        cout<<"The string "<<"'"<<s<<"'"<<" contains "<<tt<<" palindromes."<<endl;
        mp.clear();
    }
    return 0;
}
