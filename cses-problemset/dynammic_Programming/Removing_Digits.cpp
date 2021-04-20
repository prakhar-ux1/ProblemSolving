// It does not matter how slowly you go as long as you do not stop
#include<bits/stdc++.h>
using namespace std;
#define  fio ios_base::sync_with_stdio(false);cin.tie(NULL);

signed main()
{
    int n;
    cin>>n;
    long long dp[n+1];
   // memset(dp,INT_MAX,sizeof(dp));
   // memset(dp,INT_MAX,sizeof(dp))
    for(int i=1;i<=n;i++)
    dp[i]=INT_MAX;
    dp[0]=0;;
     for(int i=1;i<=n;i++)
    {  int a=i;
   // cout<<dp[i]<<"---0";
        while(a)
        {   if(i>=a%10)
            { 
            dp[i]=min(dp[i],1+dp[i-(a%10)]);
           }
           
           a=a/10;
        }
    }
    cout<<dp[n]<<"\n";
}