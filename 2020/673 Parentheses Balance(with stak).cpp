#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
int main()
{
    int t,i;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        stack<char>sk;
        string s;
        getline(cin,s);
        for(i=0; i<s.size(); i++)
        {
            if((s[i]==')'||s[i]==']')&&sk.empty())
                break;
            if(s[i]==')'&&(sk.top()=='('))
                sk.pop();
            else if(s[i]==']'&&(sk.top()=='['))
                sk.pop();
            else if(s[i]=='('||s[i]=='[')
                sk.push(s[i]);
        }
        if(i==s.size()&&sk.empty())
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
