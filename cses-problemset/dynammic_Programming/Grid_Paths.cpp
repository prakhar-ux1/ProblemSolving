// It does not matter how slowly you go as long as you do not stop
#include<bits/stdc++.h>
using namespace std;
#define  fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define  int long long
const int mod=1e9+7;
signed main()
{
   int n;
   cin>>n;
   vector<vector<char>> dp(n,vector<char>(n));
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>dp[i][j];
       }
   }
   vector<vector<int>> sd(n+1,vector<int>(n+1));
   for(int i=0;i<=n;i++)
   {
       sd[i][0]=0;
       sd[0][i]=0;

   }
   sd[0][1]=1;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           if(dp[i-1][j-1]=='*')
           {
               sd[i][j]=0;

           }
           else
           sd[i][j]=sd[i-1][j]%mod+sd[i][j-1]%mod;
           sd[i][j]%=mod;

      }
   }
   cout<<sd[n][n]<<"\n";

}