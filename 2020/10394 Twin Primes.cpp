#include<iostream>
#include<math.h>
using namespace std;
int status[30000001];
void siv()
{
    int sq = sqrt(30000000);
    for (int i = 4; i <= 30000000; i += 2)
    {
        status[i] = 1;
    }
    for (int i = 3; i <= sq; i += 2)
    {
        if (status[i] == 0)
        {
            for (int j = i * i; j <= 30000000; j += i)
                status[j] = 1;
        }
    }
    status[1] = 1;
}
int a[30000000],aa[30000000];
void functio()
{
    int i,t=1;
    siv();
    for(i=1; i<30000000; i=i+2)
    {
        if(status[i]==0 && status[i+2]==0)
        {
            a[t]=i;
            aa[t]=i+2;
            t++;
        }
    }
}

int main()
{
    int n;
    functio();
    while(scanf("%d",&n)==1)
    {
        printf("(%d, %d)\n",a[n],aa[n]);
    }
    return 0;
}
