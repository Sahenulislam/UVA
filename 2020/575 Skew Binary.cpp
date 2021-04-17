#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s&&s!="0")
    {
        long long int sum=0;
        int i,j=s.size();
        for(i=0;i<s.size();i++)
        {
            sum+=(s[i]-'0')*(pow(2,j--)-1);
        }
        cout<<sum<<endl;
    }
    return 0;
}
