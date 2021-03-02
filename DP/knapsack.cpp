#include<bits/stdc++.h>
using namespace std;
#define int long long

int dp[205][200005];
main()
{
	int n,b;cin>>n>>b;
	vector<int>v(n),w(n);
	for(int i=0;i<n;i++)cin>>v[i]>>w[i];
	for(int i=0;i<=n;i++){
		for(int j=b;j>=0;j--){
			if(j+w[i]>b) dp[i+1][j]=dp[i][j];
			else dp[i+1][j]=max(dp[i][j+w[i]]+v[i],dp[i][j]);
		}
	}
	cout<<dp[n][0]<<endl;
}