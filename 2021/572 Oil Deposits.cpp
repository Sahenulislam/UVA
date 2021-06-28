#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
long long lcm(ll a, ll b)
{
    return (a / (__gcd(a, b))) * b;
}
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)

ll g[111][111], visit[111][111], m, n, pocket = 0;
ll X[8] = {0, 0, -1, 1, -1, 1, -1, 1};
ll Y[8] = {-1, 1, 1, -1, 0, 0, -1, 1};

void bfs(ll i, ll j)
{
    visit[i][j] = 1;
    queue<pair<ll, ll>> que;
    que.push({i, j});
    while (!que.empty())
    {
        ll a = que.front().first;
        ll b = que.front().second;
        que.pop();
        for (ll i = 0; i < 8; i++)
        {
            ll r = a + X[i];
            ll c = b + Y[i];
            if (r >= 0 && r < n && c >= 0 && c < m && g[r][c] == 1 && visit[r][c] == 0)
            {
                pocket++;
                visit[r][c] = 1;
                que.push({r, c});
            }
        }
    }
}
int main()
{
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
            break;
        for (ll i = 0; i < n + 5; i++)
        {
            for (ll j = 0; j < m + 5; j++)
            {
                g[i][j] = 0;
                visit[i][j] = 0;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                char ch;
                cin >> ch;
                if (ch == '*')
                    g[i][j] = 0;
                else
                    g[i][j] = 1;
            }
        }
        ll cont = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (visit[i][j] == 0 && g[i][j] == 1)
                {
                    pocket = 1;
                    bfs(i, j);
                    cont += ((pocket + 99) / 100);
                }
            }
        }
        cout << cont << endl;
    }
    return 0;
}

