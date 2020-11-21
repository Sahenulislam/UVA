#include<iostream>
using namespace std;
int main()
{
    string tt="",ss,s,temp="ay";
    int i,j,n;
    while(getline(cin,ss))
    {
        n=0;
        ss+=".";
        for(j=0; j<ss.size(); j++)
        {
            if((ss[j]>=65&&ss[j]<=90)||(ss[j]>=97&&ss[j]<=122))
            {
                s+=ss[j];
                n=1;
            }
            else if(n==1)
            {
                i=0;
                if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')||(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
                {
                    s+=temp;
                }
                else if((s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')&&(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'))
                {
                    s+=s[i]+temp;
                    s.erase(0,1);
                }
                if(j==ss.size()-1)
                    cout<<tt<<s;
                else
                    cout<<tt<<s<<ss[j];
                s.clear();
                tt.clear();
                n=0;
            }
            else
                tt+=ss[j];
        }
        if(tt!="")
        {
            tt.erase(tt.size()-1,1);
            cout<<tt<<endl;
        }
        else
            cout<<tt<<endl;
        tt.clear();
        s.clear();
    }
    return 0;
}
