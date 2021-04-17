#include<iostream>
using namespace std;

int main()
{
    int i,j;
    string s,s1,ss;
    s=" 234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./ERTYUIOPDFGHJKLCVBNM";
    s1=" `1234567890qwertyuiop[asdfghjklzxcvbnm,QWERTYUIASDFGHJZXCVB";
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
