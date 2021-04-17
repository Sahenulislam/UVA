#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
vector<int>ans;
int flag=0,mx=0;
void recur(int sum,int i,int newsum,vector<int>v)
{
//    for(int i=0;i<vec.size();i++)
//        cout<<vec[i]<<" ";
//    return;
    //cout<<sum<<endl;
    if(sum>newsum&&flag==0)
    {
        if(newsum>mx)
        {
            mx=newsum;
            ans=v;
        }
        for(; i<vec.size(); i++)
        {
            //cout<<"d"<<endl;
           // newsum+=vec[i];
            v.push_back(vec[i]);
           // cout<<i<<endl;
            //cout<<newsum+vec[i]<<endl;
            recur(sum,i+1,newsum+vec[i],v);
//            cout<<"la"<<endl;
//            cout<<newsum<<endl;
//            cout<<i<<endl;
            v.pop_back();
        }
    }
    if(sum==newsum)
    {
        //cout<<"tt"<<endl;
        mx=newsum;
        //cout<<mx<<endl;
        ans=v;
        flag=1;
    }
}
int main()
{
    int t;
    //cin>>t;
    while(cin>>t)
    {
        vec.clear();
        ans.clear();
        int n,a;
        flag=0,mx=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            vec.push_back(a);
        }
        recur(t,0,0,ans);
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
            cout<<"sum:"<<mx<<endl;
    }
    return 0;
}
