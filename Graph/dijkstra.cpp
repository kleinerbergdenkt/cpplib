#include<bits/stdc++.h>

int n,m,s,t;
std::vector<std::vector<std::pair<int,int>>>g(101010);

int dijkstra(int s,int t)
{
	std::vector<int>dist(n,1e9);dist[s]=0;
	std::priority_queue<std::pair<int,int>,
	std::vector<std::pair<int,int>>,
	std::greater<>>pq;
	pq.emplace(dist[s],s);
	while(!pq.empty())
	{
		auto[x,u]=pq.top();
		pq.pop();
		if(x>dist[u])continue;
		for(auto[v,c]:g[u])c+=dist[u],dist[v]>c&&(pq.emplace(dist[v]=c,v),0);
	}
	return dist[t];
}

int main()
{
	using namespace std;
	cin>>n>>m>>s>>t;
	s--;t--;
	for(int i=0,a,b,c;i<m;i++)
	{
		cin>>a>>b>>c;a--;b--;
		g[a].emplace_back(b,c);
		g[b].emplace_back(a,c);
	}

	cout<<dijkstra(s,t);
}