#include<bits/stdc++.h>
using namespace std;

//union-find
struct uni
{
	vector<int>par,siz; // par[i]: iの親の番号  ex: par[3]=2 -> 3の親が2
	//siz : 素集合のサイズを表す配列
	uni(int n):par(n),siz(n,1LL){ // 最初はすべてが根であるとして初期化
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
		int rx=root(x); // xの根: rx
		int ry=root(y); // yの根: ry
		if(rx==ry)return; // xとyの根が同じ時はそのまま(同じ木なので)
		if(siz[rx]<siz[ry])swap(rx,ry);
		siz[rx]+=siz[ry];
		par[ry]=rx;
		return;
	}
	int root(int x){return par[x]==x?x:par[x]=root(par[x]);}
	bool same(int x,int y){return root(x)==root(y);}
	int size(int x){return siz[root(x)];}
};

main(){}
