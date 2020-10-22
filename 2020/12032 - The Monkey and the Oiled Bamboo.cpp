#include<iostream>
using namespace std;
int main()
{
    int t,n,nnn[100000],nn[100000],i,max,ti,c=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        nn[0]=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&nn[i]);
        }
        for(i=1; i<=n; i++)
        {
            nnn[i-1]=nn[i]-nn[i-1];
        }
        max=nnn[0];
        for(i=1; i<=n-1; i++)
        {
            if(max<nnn[i])
                max=nnn[i];
        }
        ti=max;
        for(i=1; i<=n; i++)
        {
            if(nn[i]-nn[i-1]==max)
            {
                max--;
            }
            else if(nn[i]-nn[i-1]>max)
            {
                max=ti+1;
                ti++;
                i=1;
            }
        }
        printf("Case %d: %d\n",c++,ti);
    }
    return 0;
}
