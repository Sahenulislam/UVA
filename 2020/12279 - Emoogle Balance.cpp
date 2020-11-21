#include<iostream>
using namespace std;

int main()
{
    int t,i,j,sum,c=1;
    while(scanf("%d",&t)==1 && t!=0)
    {
        sum=0;
        for(j=1; j<=t; j++)
        {
            scanf("%d",&i);
            if(i==0)
                sum++;
        }
        t=t-sum;
        printf("Case %d: %d\n",c++,t-sum);
    }
    return 0;
}
