#include<iostream>
using namespace std;
int main()
{
    int i,tt,m,temp,j,temp1,a[100000],aa[100000];
    string s;
    while(getline(cin,s))
    {
        temp=0,j=0,m=0;
        if(s[0]-'0'>=0&&s[0]-'0'<=9)
        {
            for(i=s.size()-1; i>=0; i--)
            {
                temp=temp*10+s[i]-'0';
                if(temp>=32&&temp<=122)
                {
                    printf("%c",temp);
                    temp=0;
                }
            }
            cout<<endl;
        }
        else
        {
            for(i=0; i<s.size(); i++)
            {
                temp1=s[i],tt=0;
                while(temp1!=0)
                {
                    aa[tt++]=temp1%10;
                    temp1=temp1/10;
                }
                for(j=tt-1; j>=0; j--)
                {
                    a[m++]=aa[j];
                }
            }
            for(i=m-1; i>=0; i--)
                cout<<a[i];
            cout<<endl;
        }
    }
    return 0;
}
