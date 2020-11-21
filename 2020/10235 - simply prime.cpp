#include<stdio.h>
#include<math.h>
int status[1000000 + 1];
void siv()
{
    int sq = sqrt(1000000);
    for (int i = 4; i <= 1000000; i += 2)
    {
        status[i] = 1;
    }

    for (int i = 3; i <= sq; i += 2)
    {
        if (status[i] == 0)
        {
            for (int j = i * i; j <= 1000000; j += i)
                status[j] = 1;
        }
    }
    status[1] = 1;
}
int main()
{
    int n,c,q,rem,rev=0,o;
     siv();
    while(scanf("%d",&n)==1)
    {
        q=n;
        if(status[n]==0)
        {
            rev=0;
            while(n!=0)
            {
                rem=n%10;
                rev=rev*10+rem;
                n=n/10;
            }
            if(status[rev]==0 && rev!=q)
                printf("%d is emirp.\n",q);
            else
                printf("%d is prime.\n",q);
        }
        else
            printf("%d is not prime.\n",q);
    }
    return 0;
}
