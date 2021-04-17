#include<iostream>
using namespace std;
int main()
{
    int i,j;
    string s=" 1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";
    string s1=" `1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,.";
    string ss;
    while(getline(cin,ss))
    {
        for(i=0;i<ss.size();i++)
        {
            for(j=0;j<s.size();j++)
            {
                if(s[j]==ss[i])
                {
                    cout<<s1[j];
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
