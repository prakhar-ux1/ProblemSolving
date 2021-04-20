// It does not matter how slowly you go as long as you do not stop
#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int dp[5000 + 1][5000 + 1];
signed main()
{
    string a, b;
    cin >> a;
    cin >> b;
    int z = a.length();
    int x = b.length();
    for (int i = 0; i <= z; i++)
        for (int j = 0; j <= x; j++)
        {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
        }
    cout << dp[z][x] << '\n';
}
