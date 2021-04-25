
//union-find
struct uni
{
	vector<int>par,siz;
	int g_;
	uni(int n):par(n),siz(n,1LL),g_(n)
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
		g_--;
		if(siz[rx]<siz[ry])swap(rx,ry);
		siz[rx]+=siz[ry];
		par[ry]=rx;
		return;
	}
	int grcount(){return g_;}
	int root(int x){return par[x]==x?x:par[x]=root(par[x]);}
	bool same(int x,int y){return root(x)==root(y);}
	int size(int x){return siz[root(x)];}
};
