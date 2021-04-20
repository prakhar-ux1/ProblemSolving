// It does not matter how slowly you go as long as you do not stop
#include<bits/stdc++.h>
using namespace std;
#define  fio ios_base::sync_with_stdio(false);cin.tie(NULL);
long long mod =1e9+7;
signed main()
{
    int n;
    cin>>n;
    long long dp[n+1];
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {   dp[i]=0;
        if(i>=1)
        dp[i]+=dp[i-1]%mod;
        if(i>=2)
        dp[i]+=dp[i-2]%mod;
        if(i>=3)
        dp[i]+=dp[i-3]%mod;
        if(i>=4)
        dp[i]+=dp[i-4]%mod;
        if(i>=5)
          dp[i]+=dp[i-5]%mod;
        if(i>=6)
        dp[i]+=dp[i-6]%mod;
        dp[i]%=mod;
    }
    cout<<dp[n]<<"\n";
}