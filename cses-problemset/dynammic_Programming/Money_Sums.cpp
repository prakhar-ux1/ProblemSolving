// It does not matter how slowly you go as long as you do not stop
#include<bits/stdc++.h>
using namespace std;
#define  fio ios_base::sync_with_stdio(false);cin.tie(NULL);

signed main()
{

    int n;
    cin>>n;
    int ar[n],sum=0,k=0;
    for(int i=0;i<n;i++)
    {cin>>ar[i];
    sum+=ar[i];
    }

    bool dp[n+1][sum+1];
    for(int i=0;i<=sum;i++)
    dp[0][i]=false;
    for(int i=0;i<=n;i++)
    dp[i][0]=true;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
           if(j>=ar[i-1])
           dp[i][j]=dp[i-1][j-ar[i-1]]||dp[i-1][j];
           else
           dp[i][j]=dp[i-1][j];
           if(i==n&&dp[i][j])
           k++;
           
        }
    }
    /* for(int j=0;j<=sum;j++)
    cout<<j<<" ";
    for(int i=0;i<=n;i++)
    {for(int j=0;j<=sum;j++)
    {
        cout<<dp[i][j]<<" ";
    }
    cout<<"\n";} */
    cout<<k<<"\n";
    for(int i=1;i<=sum;i++)    
    if(dp[n][i])
    cout<<i<<" ";
}