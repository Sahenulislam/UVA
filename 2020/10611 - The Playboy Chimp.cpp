#include<bits\stdc++.h>
int binary_searc(int A[],int n,int x)
{
    int left,right,mid,flag=0;
    left=0;
    right=n-1;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(A[mid]==x)
        {
            flag=1;
            break;
        }
        if(A[mid]<x)
        {
            left=mid+1;
        }
        else
            right=mid-1;
    }
    if(flag!=0)
    {
        return mid;
    }
    else
        return left-1;
}
int main()
{
    int t1,t2,a[100000],aa[100000],i,sum=0,j,q=0;
    scanf("%d",&t1);
    for(i=0; i<t1; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t2);
    for(i=0; i<t2; i++)
    {
        scanf("%d",&aa[i]);
    }
    for(i=0; i<t2; i++)
    {
        int p=binary_searc(a,t1,aa[i]);
        if(a[p]==aa[i])
        {
            int max=a[p];
            for(j=p+1;j<t1;j++)
            {
               if(a[j]>max)
               {
                    max=a[j];
                    break;
               }
            }
            int min=a[p];
            for(j=p-1;j>=0;j--)
            {
                if(a[j]<min)
                {
                    min=a[j];
                    break;
                }
            }
            if(min==a[p] && max!=a[p])
                printf("X %d\n",max);
            else if(min!=a[p] && max==a[p])
                printf("%d X\n",min);
            else if(min==a[p] && max==a[p])
                printf("X X\n");
            else if(min!=a[p] && max!=a[p])
                printf("%d %d\n",min,max);
        }
        else
        {
            if(p+1>=t1)
                printf("%d X\n",a[p]);
            else if(p<0)
                printf("X %d\n",a[p+1]);
            else if(p+1!=t1 && p!=-1)
                printf("%d %d\n",a[p],a[p+1]);
        }
    }
    return 0;
}
