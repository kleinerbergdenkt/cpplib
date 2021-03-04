#include<bits/stdc++.h>
using namespace std;

template<long long Mod>struct modInt
{
	long long val;
	constexpr modInt(long long v=0)noexcept:val(v%Mod){if(val<0)val+=Mod;}
	constexpr getmod(){return Mod;}
	constexpr modInt operator -()const noexcept{return val?Mod-val:0;}
	constexpr modInt operator +(const modInt&r)const noexcept{return modInt(*this)+=r;}
	constexpr modInt operator -(const modInt&r)const noexcept{return modInt(*this)-=r;}
	constexpr modInt operator *(const modInt&r)const noexcept{return modInt(*this)*=r;}
	constexpr modInt operator /(const modInt&r)const noexcept{return modInt(*this)/=r;}
	constexpr modInt& operator +=(const modInt&r)noexcept
	{
		val+=r.val;
		if(val>=Mod)val-=Mod;
		return *this;
	}
	constexpr modInt& operator -=(const modInt&r)noexcept
	{
		val-=r.val;
		if(val<0)val+=Mod;
		return *this;
	}
	constexpr modInt& operator *=(const modInt&r)noexcept
	{
		val=val*r.val%Mod;
		return *this;
	}
	constexpr modInt& operator /=(const modInt&r)noexcept
	{
		long long a=r.val,b=Mod,u=1,v=0;
		while(b)
		{
			long long t=a/b;
			a-=t*b;swap(a,b);
			u-=t*v;swap(u,v);
		}
		val=val*u%Mod;
		if(val<0)val+=Mod;
		return *this;
	}
	constexpr bool operator ==(const modInt&r)const noexcept{return this->val==r.val;}
	constexpr bool operator !=(const modInt&r)const noexcept{return this->val!=r.val;}
	friend constexpr ostream& operator <<(ostream &os,const modInt<Mod>&x)noexcept
	{
		return os<<x.val;
	}
	friend constexpr modInt<Mod>modpow(const modInt<Mod>&a,long long n)noexcept
	{
		if(a==0)return 1;
		auto t=modpow(a,n/2);
		t=t*t;
		if(n&1)t=t*a;
		return t;
	}
};


//const long long mod=1000000007;
//using mint=modInt<mod>;

main(){}
