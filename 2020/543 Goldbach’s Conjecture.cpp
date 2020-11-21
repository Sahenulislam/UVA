#include<iostream>
#include<math.h>
using namespace std;
int p[9999999];
void siv()
{
    int i,j,s;
    s=sqrt(1000009);
    for(i=4; i<=1000001; i+=2)
    {
        p[i]=1;
    }
    for(i=3; i<=s; i+=2)
    {
        if(p[i]==0)
        {
            for(j=i*i; j<=1000001; j+=i)
                p[j]=1;
        }
    }
    p[1]=1;
}
int main()
{
    siv();
    int n,i;
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(i=n-1; i>=2; i=i-2)
        {
            if(p[i]==0 && p[n-i]==0)
            {
                printf("%d = %d + %d\n",n,n-i,i);
                break;
            }
        }
    }
    return 0;
}
