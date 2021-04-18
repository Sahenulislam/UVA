#include<bits/stdc++.h>
using namespace std;

void recur(vector<int>vec,int mx,int i,vector<int>ans,int index)
{
    if(index==mx)
    {
        for(int i=0;i<ans.size();i++)
        {
            if(i+1==ans.size())
                cout<<ans[i];
            else
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(;i<vec.size();i++)
    {
        ans.push_back(vec[i]);
        recur(vec,mx,i+1,ans,index+1);
        ans.pop_back();
    }

}

int main()
{
    int n,t=1;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(t>1)
        cout<<endl;
        int a;
        vector<int>vec,v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            vec.push_back(a);
        }
        t++;
        int mx=6;
        recur(vec,mx,0,v,0);
    }
    return 0;
}
