#include<iostream>
#include<iterator>
#include<map>
#include<algorithm>
using namespace std;
map<string,string>mp{{"A","A"},{"E","3"},{"I","I"},{"J","L"},{"L","J"},{"M","M"},
    {"O","O"},{"S","2"},{"T","T"},{"U","U"},{"V","V"},{"W","W"},{"X","X"},{"Y","Y"},
    {"Z","5"},{"1","1"},{"2","S"},{"3","E"},{"5","Z"},{"H","H"},{"8","8"}};
map<string,string>::iterator it;
bool palindrome(string s)
{
    int i;
    string rev;
    for(i=s.size()-1; i>=0; i--)
    {
        rev+=s[i];
    }
    if(rev==s)
    {
        return true;
    }
    return false;
}
bool mirrored(string s)
{
    string rev,temp,l;
    int i;
    for(i=s.size()-1; i>=0; i--)
    {
        temp=s[i];
        it=mp.find(temp);
        if(it!=mp.end())
        {
            rev+=it->second;
        }
        temp.clear();
    }
    if(rev==s)
    {
        return true;
    }
    return false;
}
int main()
{
    string s;
    while(cin>>s)
    {
        if(palindrome(s)&&!mirrored(s))
        {
            cout<<s<<" -- is a regular palindrome.\n"<<endl;
        }
        else if(palindrome(s)&&mirrored(s))
        {
            cout<<s<<" -- is a mirrored palindrome.\n"<<endl;
        }
        else if(!palindrome(s)&&!mirrored(s))
        {
            cout<<s<<" -- is not a palindrome.\n"<<endl;
        }
        else if(!palindrome(s)&&mirrored(s))
        {
            cout<<s<<" -- is a mirrored string.\n"<<endl;
        }
    }
    return 0;
}
