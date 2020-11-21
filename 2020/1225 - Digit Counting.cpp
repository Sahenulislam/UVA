#include<iostream>
#include<vector>
using namespace std;
vector<int>vec;
vector<int>veec;
int main()
{
    int n,i,j,t,g;
    scanf("%d",&t);
    while(t--)
    {
        vec.clear();
        veec.clear();
        for(i=0; i<12; i++)
            veec.push_back(0);
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            g=i;
            if(g>=10)
            {
                while(g>0)
                {
                    vec.push_back(g%10);
                    g=g/10;
                }
            }
            else
                vec.push_back(i);
        }
        for(i=0; i<vec.size(); i++)
        {
            veec[vec[i]]++;
        }
        for(i=0; i<10; i++)
        {
            if(i==9)
                printf("%d",veec[i]);
            else
                printf("%d ",veec[i]);
        }
        printf("\n");
    }
    return 0;
}
