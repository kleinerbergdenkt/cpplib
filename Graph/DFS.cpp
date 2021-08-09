#include<bits/stdc++.h>

std::vector<std::vector<int>>g(200200);
std::vector<int>ans;

void dfs(int cur,int old)
{
	ans.emplace_back(cur);
	for(int i:g[cur])if(i!=old)
	{
		dfs(i,cur);
		ans.emplace_back(cur);
	}
}

int main()
{
	using namespace std;
	int n;cin>>n;
	int a,b;
	for(int i=0;i<n-1;i++)
	{
		cin>>a>>b;a--;b--;
		g[a].emplace_back(b);
		g[b].emplace_back(a);
	}
	for(auto&v:g)sort(v.begin(),v.end());

	dfs(0,-1);
	for(int i:ans)cout<<i+1<<' ';
	cout<<endl;
}