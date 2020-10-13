#include<stdio.h>
char ch[1000][1000];
int main()
{
    int a,b,i,j,sum=0,q=1;
    while(scanf("%d %d",&a,&b)==2 && a!=0 && b!=0)
    {
        getchar();
        for(i=1; i<=a; i++)
        {
            for(j=1; j<=b; j++)
            {
                scanf("%c",&ch[i][j]);
            }
            getchar();
        }
        if(q>1)
            printf("\n");
        printf("Field #%d:\n",q++);
        for(i=1; i<=a; i++)
        {
            for(j=1; j<=b; j++)
            {
                int x,y;
                sum=0;
                x=i;
                y=j;
                if(ch[x][y]=='*')
                {
                    printf("%c",ch[x][y]);
                }
                else
                {
                    if(y-1>=1 && ch[x][y-1]=='*')
                    {
                        sum++;
                    }
                    if(y+1<=b && ch[x][y+1]=='*')
                    {
                        sum++;
                    }
                    if(x-1>=1 && ch[x-1][y]=='*')
                    {
                        sum++;
                    }
                    if(x-1>=1 && y+1<=b && ch[x-1][y+1]=='*')
                    {
                        sum++;
                    }
                    if(x-1>=1 && y-1>=1 && ch[x-1][y-1]=='*')
                    {
                        sum++;
                    }
                    if(x+1<=a && ch[x+1][y]=='*')
                    {
                        sum++;
                    }
                    if(x+1<=a && y+1<=b && ch[x+1][y+1]=='*')
                    {
                        sum++;
                    }
                    if(x+1<=a && y-1>=1 && ch[x+1][y-1]=='*')
                    {
                        sum++;
                    }
                    printf("%d",sum);
                }

            }
            printf("\n");
        }
    }
    return 0;
}
/*
4 4
*...
....
.*..
....
*/
