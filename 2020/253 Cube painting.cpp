#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        string s1,s2,s3,s4,s5,s6;
        int flag=0;
        s1=s[0];
        s1+=s[5];
        s2=s[1];
        s2+=s[4];
        s3=s[2];
        s3+=s[3];
        s4=s[6];
        s4+=s[11];
        s5=s[7];
        s5+=s[10];
        s6=s[8];
        s6+=s[9];
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        sort(s3.begin(),s3.end());
        sort(s4.begin(),s4.end());
        sort(s5.begin(),s5.end());
        sort(s6.begin(),s6.end());
        if(s1==s4)
        {
            flag++;
            s4[0]='m';
        }
        else if(s1==s5)
        {
            flag++;
            s5[0]='m';
        }
        else if(s1==s6)
        {
            flag++;
            s6[0]='m';
        }
        if(s2==s4)
        {
            flag++;
            s4[0]='m';
        }
        else if(s2==s5)
        {
            flag++;
            s5[0]='m';
        }
        else if(s2==s6)
        {
            flag++;
            s6[0]='m';
        }
        if(s3==s4)
        {
            flag++;
            s4[0]='m';
        }
        else if(s3==s5)
        {
            flag++;
            s5[0]='m';
        }
        else if(s3==s6)
        {
            flag++;
            s6[0]='m';
        }
        if(flag==3)
            cout<<"TRUE"<<endl;
        else
            cout<<"FALSE"<<endl;
    }
    return 0;
}
