#include<iostream>
using namespace std;
int main()
{
    int t,i,n,tt=1;
    string s,s1,temp;
    cin>>t;
    while(t--)
    {
        n=0;
        getchar();
        getline(cin,s);
        cin>>s1;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
                n++;
            else
                temp+=s[i];
        }
        if(s1==temp&&n!=0)
            cout<<"Case "<<tt++<<": Output Format Error"<<endl;
        else if(s==s1)
            cout<<"Case "<<tt++<<": Yes"<<endl;
        else
            cout<<"Case "<<tt++<<": Wrong Answer"<<endl;
        temp.clear();
    }
    return 0;
}
