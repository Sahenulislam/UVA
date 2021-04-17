#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        getline(cin,s);
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==')')
            {
                if(s[i-1]=='(')
                {
                    s.erase(i-1,2);
                    i=i-2;
                }
                else
                    break;
            }
            else if(s[i]==']')
            {
                if(s[i-1]=='[')
                {
                    s.erase(i-1,2);
                    i=i-2;
                }
                else
                    break;
            }
        }
        if(s.size()==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
