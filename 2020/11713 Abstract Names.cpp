#include<iostream>
using namespace std;
int main()
{
    int t,i;
    string s,s1;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cin>>s1;
        if(s.size()!=s1.size())
            cout<<"No"<<endl;
        else
        {
            for(i=0; i<s.size(); i++)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]-'0'==0)
                {
                    if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]-'0'==0) {}
                    else
                        break;
                }
                else if(s[i]!=s1[i])
                    break;
            }
            if(i==s.size())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
