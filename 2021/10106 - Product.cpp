#include <bits/stdc++.h>
using namespace std;

main()
{
    string nums1,nums2;
    while(cin>>nums1>>nums2)
    {
        int n = nums1.size();
        int m = nums2.size();
        string ans(n + m, '0');
        if(nums1=="0"||nums2=="0")
        {
            cout<<"0"<<endl;
            continue;
        }
        //cout<<ans<<endl;
        for(int i = n - 1; i>=0; i--)
        {
            for(int j = m - 1; j >= 0; j--)
            {
                int p = (nums1[i] - '0') * (nums2[j] - '0') + (ans[i + j + 1] - '0');
                ans[i+j+1] = p % 10 + '0';
               cout<<"yes "<<ans<<endl;
                ans[i+j] += p / 10 ;
                cout<<"no  "<<ans<<endl;
            }
        }
        int f=0;
        for(int i=0; i <m + n; i++)
        {
            if(ans[i]=='0'&&f==0)
                continue;
            cout<<ans[i];
            f=1;
        }
        cout<<endl;
    }
    return 0;
}

