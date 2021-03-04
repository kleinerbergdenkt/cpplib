#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(),x.end()
#define P pair<int,int>
#define spc ' '
template<class T>int chmin(T &a,const T &b){if(b<a){a=b;return 1;}return 0;}

void dijkstra()
{
	int n,m,s,t;cin>>n>>m>>s>>t;
	vector<vector<P>>g(n);
	for(int i=0;i<m;i++)
	{
		int a,b,cst;cin>>a>>b>>cst;
		g[a].push_back(make_pair(b,cst));
	}
	vector<int>dist(n,(1LL<<60));dist[s]=0;
	priority_queue<P,vector<P>,greater<P>>pq;
	pq.push(make_pair(dist[s],s));
	while(!pq.empty())
	{
		int v=pq.top().second;
		int d=pq.top().first;
		pq.pop();
		if(d>dist[v])continue;		
		for(auto e:g[v])
			if(chmin(dist[e.first],dist[v]+e.second))
				pq.push(make_pair(dist[e.first],e.first));
	}
	cout<<(dist[t]==1LL<<60?-1:dist[t])<<spc;
}

main(){dijkstra();}