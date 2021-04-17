#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,m=1;
    cin>>t;
    while(t--)
    {
        int q=0,i=0,max=-1,aa[10000],a,j;
        string s;
        vector<string>vec;
        while(q!=10)
        {
            q++;
            cin>>s;
            vec.push_back(s);
            cin>>a;
            aa[i++]=a;
            if(max<a)
                max=a;
        }
        cout<<"Case #"<<m++<<":"<<endl;
        for(j=0;j<i;j++)
        {
            if(aa[j]==max)
            {
                cout<<vec[j]<<endl;
            }
        }
    }
    return 0;
}
