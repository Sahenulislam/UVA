#include<iostream>
using namespace std;
int main()
{
    string s,temp;
    int t,i,j,sum,n,tt=1;
    char ch;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cout<<"Case "<<tt++<<": ";
        sum=0,n=0;
        for(i=1; i<s.size(); i++)
        {
            if(s[i]-'0'>=0&&s[i]-'0'<=9)
            {
                sum=sum*10+s[i]-'0';
                if(n==0)
                {
                    temp=s[i-1];
                }
                n++;
            }
            else
            {
                for(j=1; j<=sum; j++)
                {
                    cout<<temp;
                }
                n=0,sum=0;
                temp.clear();
            }
        }
        for(i=1; i<=sum; i++)
        {
            cout<<temp;
        }
        cout<<endl;
    }
    return 0;
}
