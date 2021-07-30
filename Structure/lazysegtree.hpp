
//lazysegtree
template<typename X,typename M>struct lazyseg
{
	int n;
	std::function<X(X,X)>fx;
	std::function<X(X,M)>fa;
	std::function<X(M,M)>fm;
	const X ex;
	const M em;
	std::vector<X>d;
	std::vector<M>lazy;
	lazyseg
	(
		int n_,
		std::function<X(X,X)>fx_,
		std::function<X(X,M)>fa_,
		std::function<X(M,M)>fm_,
		X ex_,
		M em_
	):n(),fx(fx_),fa(fa_),fm(fm_),ex(ex_),em(em_),d(n_*4,ex),lazy(n_*4,em)
	{
		int x=1;
		while(n_>x)x*=2;
		n=x;
	}

	void set(int i,X x){d[i+n-1]=x;}
	void build(){for(int k=n-2;k>=0;k--)d[k]=fx(d[2*k+1],d[2*k+2]);}
	void eval(int k)
	{
		if(lazy[k]==em)return;
		if(k<n-1)
		{
			lazy[k*2+1]=fm(lazy[k*2+1],lazy[k]);
			lazy[k*2+2]=fm(lazy[k*2+2],lazy[k]);
		}
		d[k]=fa(d[k],lazy[k]);
		lazy[k]=em;
	}
	void update(int a,int b,M x,int k,int l,int r)
	{
		eval(k);
		if(a<=l&&r<=b)lazy[k]=fm(lazy[k],x),eval(k);
		else if(a<r&&l<b)
		{
			update(a,b,x,k*2+1,l,(l+r)/2);
			update(a,b,x,k*2+2,(l+r)/2,r);
			d[k]=fx(d[k*2+1],d[k*2+2]);
		}
	}
	void update(int a,int b,M x){update(a,b,x,0,0,n);}
	X qsub(int a,int b,int k,int l,int r)
	{
		eval(k);
		if(r<=a||b<=l)return ex;
		else if(a<=l&&r<=b)return d[k];
		else
		{
			X vl=qsub(a,b,k*2+1,l,(l+r)/2);
			X vr=qsub(a,b,k*2+2,(l+r)/2,r);
			return fx(vl,vr);
		}
	}
	X query(int a,int b){return qsub(a,b,0,0,n);}
};

//RMQ :
//int n=**size**
//auto fx=[](int a,int b)->int{return min(a,b);};
//auto fa=[](int x,int m)->int{return m;};
//auto fm=[](int m1,int m2)->int{return m2;};
//int ex=inf;
//int em=inf;
//lazyseg<int,int>rmq(n,fx,fa,fm,ex,em);
