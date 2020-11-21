#include<iostream>
using namespace std;
bool palindrome(string s)
{
    string rev;
    int i;
    for(i=s.size()-1; i>=0; i--)
    {
        rev+=s[i];
    }
    if(s==rev)return true;
    return false;
}
int main()
{
    string s,s1;
    int i;
    while(getline(cin,s))
    {
        if(s=="DONE")
            break;
        for(i=0; i<s.size(); i++)
        {
            if(isupper(s[i]))
            {
                s1+=s[i]+32;
            }
            else if(islower(s[i]))
            {
                s1+=s[i];
            }
        }
        if(palindrome(s1)){cout<<"You won't be eaten!"<<endl;}
        else {cout<<"Uh oh.."<<endl;}
        s1.clear();
    }
    return 0;
}
