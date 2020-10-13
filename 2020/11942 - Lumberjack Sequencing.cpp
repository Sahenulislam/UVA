#include<stdio.h>
int main()
{
    int test,n[10000],f=0,c=0,i;
    scanf("%d",&test);
    printf("Lumberjacks:\n");
    while(test--)
    {
        c=0,f=0;
        for(i=0; i<10; i++)
        {
            scanf("%d",&n[i]);
        }
        for(i=0; i<10-1; i++)
        {
            if(n[i]<n[i+1])
                c++;
            else if(n[i]>n[i+1])
                f++;
        }
        if(c==9 || f==9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
