#include<iostream>
using namespace std;
int A[100000],n;
void section()
{
    int i,j,temp,min;
    for(i=0; i<n; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(A[j]<A[min])
                min=j;
        }
        if(min!=i)
        {
            temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
    }
}
int main()
{
    int test,i,j;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
           scanf("%d",&A[j]);
        }
        section();
        printf("Case %d: %d\n",i,A[n/2]);
    }
    return 0;
}
