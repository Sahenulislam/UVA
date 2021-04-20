#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes "YES"
#define no "NO"
#define pb push_back
#define pop pop_back
#define si size()
#define inco " "

int main()
{
    int n,t=1;
    vector<int>v;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(t!=1)
            cout<<endl;
        int cont=0;
        for(int i=1234; i<=49400; i++)
        {
            int a=i,flag=0;
            int b=a*n;
            if(b>98765)
                break;
            string s1=to_string(a),s2=to_string(b);
            if(s2.size()==4)
                continue;
            for(int j=0; j<s1.size(); j++)
            {
                for(int k=j+1; k<s1.size(); k++)
                {
                    if(s1[j]==s1[k]||(s1.size()==4&&s1[k]=='0'))
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    break;
            }
            if(flag==1)
                continue;
            for(int j=0; j<s2.size(); j++)
            {
                for(int k=j+1; k<s2.size(); k++)
                {
                    if(s2[j]==s2[k])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    break;
            }
            if(flag==1)
                continue;
            for(int j=0; j<s1.size(); j++)
            {
                for(int k=0; k<s2.size(); k++)
                {
                    if(s1[j]==s2[k]||(s1.size()==4&&s2[k]=='0'))
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    break;
            }
            if(flag==1)
                continue;
            if(b%a==0&&b/a==n)
            {
                cont++;
                if(a/10000>=1)
                    cout<<b<<" / "<<a<<" = "<<n<<endl;
                else
                    cout<<b<<" / 0"<<a<<" = "<<n<<endl;
            }

        }
        if(cont==0)
            cout<<"There are no solutions for "<<n<<"."<<endl;
        t++;
    }
    return 0;
}
//void recur(int i,vector<int>ans,int N)
//{
//    if(ans.size()==10)
//    {
//        int a=0,b=0;
//        for(int j=0; j<=9; j++)
//        {
//            if(j<=4)
//                a=a*10+ans[j];
//            else
//                b=b*10+ans[j];
//        }
//        if(b%a==0&&(b/a)==N)
//        {
//            cont++;
//            if(a/10000>=1)
//                cout<<b<<" / "<<a<<" = "<<N<<endl;
//            else
//                cout<<b<<" / 0"<<a<<" = "<<N<<endl;
//        }
//        return;
//    }
//    //cout<<"d"<<endl;
//    for(int i=0; i<=9; i++)
//    {
//        //cout<<"loop"<<endl;
//        if(visit[i]==0)
//        {
////            if(ans[0]==2&&ians.size()==5&&)
////                continue;
////           if(ans.size()==0&&i>4)
////                continue;
//            visit[i]=1;
//            ans.pb(i);
//            recur(i+1,ans,N);
//            // cout<<"pop"<<endl;
//            visit[i]=0;
//            ans.pop();
//        }
//    }
//    //cout<<endl;
//}
//int main()
//{
//    int n,t=1;
//    vector<int>v;
//    while(cin>>n)
//    {
//        if(t!=1)
//            cout<<endl;
//        cont=0;
//        recur(0,v,n);
//        if(cont==0)
//            cout<<"There are no solutions for "<<n<<"."<<endl;
//        t++;
//    }
//    return 0;
//}
//if((b%a==0&&(b/a)==N)||(a%b==0&&a/b==N))
//        {
//            cont++;
//            if(a<b)
//            {
//                if(b/10000>=1)
//                    cout<<a<<" / "<<b<<" = "<<N<<endl;
//                else
//                    cout<<a<<" / "<<b<<" = "<<N<<endl;
//            }
//            else
//            {
//                if(a/10000>=1)
//                    cout<<b<<" / "<<a<<" = "<<N<<endl;
//                else
//                    cout<<b<<" / 0"<<a<<" = "<<N<<endl;
//            }
//        }
