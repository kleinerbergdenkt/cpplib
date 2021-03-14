#include<bits/stdc++.h>
using namespace std;

template<long long Mod>struct modInt
{
	long long x;
	constexpr modInt(long long v=0)noexcept:x(v%Mod){if(x<0)x+=Mod;}
	template<typename T>
	constexpr long long getval()const noexcept {return x;}
	constexpr getmod(){return Mod;}
	constexpr modInt operator-()const noexcept{return x?Mod-x:0;}
	constexpr modInt operator+(const modInt&r)const noexcept{return modInt(*this)+=r;}
	constexpr modInt operator-(const modInt&r)const noexcept{return modInt(*this)-=r;}
	constexpr modInt operator*(const modInt&r)const noexcept{return modInt(*this)*=r;}
	constexpr modInt operator/(const modInt&r)const noexcept{return modInt(*this)/=r;}
	constexpr modInt&operator+=(const modInt&r)noexcept{x+=r.x;if(x>=Mod)x-=Mod;return *this;}
	constexpr modInt&operator-=(const modInt&r)noexcept{x-=r.x;if(x<0)x+=Mod;return *this;}
	constexpr modInt&operator*=(const modInt&r)noexcept{x=x*r.x%Mod;return *this;}
	constexpr modInt&operator/=(const modInt&r)noexcept
	{
		long long a=r.x,b=Mod,u=1,v=0;
		while(b)
		{
			long long t=a/b;
			a-=t*b;swap(a,b);
			u-=t*v;swap(u,v);
		}
		x=x*u%Mod;
		if(x<0)x+=Mod;
		return *this;
	}
	constexpr bool operator==(const modInt&r){return this->x==r.x;}
	constexpr bool operator!=(const modInt&r){return this->x!=r.x;}
	friend ostream&operator<<(ostream&os,const modInt<Mod>&a){return os<<a.x;}
	friend istream&operator>>(istream&is,modInt<Mod>&a){long long v;is>>v;a=modInt<Mod>(v);return is;} 
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
