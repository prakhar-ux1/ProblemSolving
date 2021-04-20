// It does not matter how slowly you go as long as you do not stop
#include<bits/stdc++.h>
using namespace std;
#define  fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
signed main()
{
int n,x;
cin>>n>>x;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int dp[x+1];
dp[0]=0;
for(int i=1;i<=x;i++)
{    dp[i]=1e7;
    for(int j=0;j<n;j++)
    {    
        if(i>=arr[j])
        dp[i]=min(dp[i],1+dp[i-arr[j]]);

    }
}
if(dp[x]==1e7)
{cout<<"-1";
return 0;}
cout<<dp[x]<<"\n";



}