#include<bits/stdc++.h>
using isize=ptrdiff_t;
using usize=size_t;

//union-find
struct uni
{
	int n_;
	std::vector<int>par,siz;
	uni(int n):n_(n),par(n),siz(n,1LL)
	{
		for(int i=0;i<n;i++)par[i]=i;
	}
	void init(int n)
	{
		par.resize(n);
		siz.assign(n,1LL);
		for(int i=0;i<n;i++)par[i]=i;
	}
	void merge(int x,int y)
	{
		int rx=root(x);
		int ry=root(y);
		if(rx==ry)return;
		if(siz[rx]<siz[ry])std::swap(rx,ry);
		siz[rx]+=siz[ry];
		par[ry]=rx;
		return;
	}
	int root(int x){return par[x]==x?x:par[x]=root(par[x]);}
	bool same(int x,int y){return root(x)==root(y);}
	int size(int x){return siz[root(x)];}
	std::vector<std::vector<int>>groups()
	{
		std::vector<int>rbuf(n_),grsiz(n_);
		for(int i=0;i<n_;i++)grsiz[(rbuf[i]=root(i))]++;
		std::vector<std::vector<int>>res(n_);
		for(int i=0;i<n_;i++)res[i].reserve(grsiz[i]);
		for(int i=0;i<n_;i++)res[rbuf[i]].push_back(i);
		res.erase(remove_if(res.begin(),res.end(),[&](const std::vector<int>&v){return v.empty();}),res.end());
		return res;
	}
};

struct edge{usize u,v,cost;};
bool cp(edge&a,edge&b){return a.cost<b.cost;}
std::vector<edge>G;
usize V,E;

usize kurasukaru()
{
	uni uf(V);
	std::sort(G.begin(),G.end(),cp);

	usize ans=0;
	for(int i=0;i<E;i++)
	{
		edge e=G[i];
		if(!uf.same(e.u,e.v))
		{
			uf.merge(e.u,e.v);
			ans+=e.cost;
		}
	}
	return ans;
}

int main()
{
	std::cin>>V>>E;
	G.resize(E);

	for(int i=0;i<E;i++)G[i].cost=(usize)1<<29;
	for(int i=0;i<E;i++)
	{
		usize x,y,c;std::cin>>x>>y>>c;
		G[i]=(edge){x,y,c};
	}
	usize ans=kurasukaru();
	std::cout<<ans<<'\n';
}