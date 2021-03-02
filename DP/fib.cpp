#include<bits/stdc++.h>
using namespace std;
#define int long long

main()
{
	int n;cin>>n;
	int dp[10000];
	dp[1]=1;dp[2]=1;
	for(int i=1;i<n-1;i++){
		dp[i+2]=dp[i+1]+dp[i];
	}
	cout<<dp[n]<<endl;
}