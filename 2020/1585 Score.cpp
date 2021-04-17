#include<iostream>
using namespace std;
int main()
{
    int t,i;
    string s;
    cin>>t;
    while(t--)
    {
        int sum=0,ll=0,j=0;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='X')
            {
                sum+=ll;
                ll=0;
                j=0;
            }
            else
            {
                j++;
                ll+=j;
            }
        }
        sum+=ll;
        cout<<sum<<endl;
    }
    return 0;
}
