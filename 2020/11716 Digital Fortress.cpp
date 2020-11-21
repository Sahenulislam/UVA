#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,i,j,len;
    double sq;
    string s;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        getline(cin,s);
        len=s.size();
        sq=sqrt(len);
        len=sq;
        sq=sq-len;
        if(sq)
        {
            printf("INVALID\n");
        }
        else
        {
            for(i=0; i<len; i++)
            {
                for(j=i; j<s.size(); j+=len)
                    printf("%c",s[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
