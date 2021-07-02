
#include<vector>
//Fenwicktree(1-indexed)
template<typename T>
struct Fw
{
	int n;
	std::vector<T>fw;
	Fw(int n_=0):n(n_),fw(n_+1){}
	T sum(int i)
	{
		T ans=0;
		for(;i>0;i-=i&-i)ans+=fw[i];
		return ans;
	}
	void add(int i,T a)
	{
		if(!i)return;
		for(;i<=n;i+=i&-i)fw[i]+=a;
	}
	int l_b_fw(T k)
	{
		if(k<=0)return 0;
		int ret=0,i=1;
		for(;(i<<1)<=n;i<<=1);
		for(;i;i>>=1)if(ret+i<=n&&fw[ret+i]<k)k-=fw[ret+=i];
		return (ret+1);
	}
};
