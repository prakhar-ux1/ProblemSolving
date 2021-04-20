// It does not matter how slowly you go as long as you do not stop
#include<bits/stdc++.h>
using namespace std;
#define  fio ios_base::sync_with_stdio(false);cin.tie(NULL);

signed main()
{   fio
    int n,x;
    cin>>n>>x;
    int h[n];
    int s[n];
    for(int i=0;i<n;i++)
    cin>>h[i];
    for(int i=0;i<n;i++)
    cin>>s[i];
    int dp[n+1][x+1];
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }
    for(int i=1;i<=x;i++)
    dp[0][i]=-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=x;j++)
        {
            if(h[i-1]<=j)
            dp[i][j]=max(s[i-1]+dp[i-1][j-h[i-1]],dp[i-1][j]);
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    int max=-1;
    for(int i=0;i<=x;i++)
    if(max<dp[n][i])
     max=dp[n][i];
    cout<<max<<"\n";


}