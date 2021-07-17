
#include<vector>
//BinaryIndexedTree(1-indexed)
template<typename T>
struct BIT
{
	int n;
	std::vector<T>B_I_T;
	BIT(int n_=0,T init=0):n(n_),B_I_T(n_+1,init){}
	T sum(int i)
	{
		T ans=0;
		for(;i>0;i-=i&-i)ans+=B_I_T[i];
		return ans;
	}
	void add(int i,T a)
	{
		if(!i)return;
		for(;i<=n;i+=i&-i)B_I_T[i]+=a;
	}
	int l_b_B_I_T(T k)
	{
		if(k<=0)return 0;
		int ret=0,i=1;
		for(;(i<<1)<=n;i<<=1);
		for(;i;i>>=1)if(ret+i<=n&&B_I_T[ret+i]<k)k-=B_I_T[ret+=i];
		return (ret+1);
	}
};