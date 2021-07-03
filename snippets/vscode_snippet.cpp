#include<bits/stdc++.h>
#pragma GCC target("avx512f")
#pragma GCC optimize("O3")
#define int long long
#define itn int
#define vt(tp) vector<tp>
#define vvt(tp) vector<vector<tp>>
#define vvt2(nm,tp,h,w,n) vector<vector<tp>>nm((h),vector<tp>(w,n))
#define P pair<int,int>
#define all(x) x.begin(),x.end()
#define rsort(x) nsort(x);reverse(all(x))
#define unq(v) v.erase(unique(all(v)),v.end())
#define l_b(c,x) distance(c.begin(),lower_bound(all(c),(x)))
#define u_b(c,x) distance(c.begin(),upper_bound(all(c),(x)))
#define fi first
#define se second
#define mkpr make_pair
#define pb push_back
#define eb emplace_back
#define spc ' '
#define pass 
#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(a),__B_SIZE__=(b);i<__B_SIZE__;i++)
#define _per(i,n) peri(i,n,0)
#define peri(i,a,b) for(int i=(a),__B_SIZE__=(b);i>=__B_SIZE__;i--)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#define per(...) _overload3(__VA_ARGS__,peri,_per,)(__VA_ARGS__)
#define bitshift(n) (1LL<<(n))
#define myceil(a,b) ((a)+((b)-1))/(b)
#define scale(n) cout<<fixed<<setprecision(n)
namespace gengar094
{
	using i32=std::int32_t;
	using i64=std::int64_t;
	using u32=std::uint32_t;
	using u64=std::uint64_t;
	using isize=std::ptrdiff_t;
	using usize=std::size_t;
	using ll=long long;
	using ull=unsigned long long;
	void in(){}
	template<class Car,class...Cdr>
	void in(Car&&car,Cdr&&...cdr){std::cin>>car;in(std::forward<Cdr>(cdr)...);}
	template<class T>void drop(T x){std::cout<<(x)<<std::endl;exit(0);}
	void dYes(){std::flush(std::cout);puts("Yes");std::flush(std::cout);exit(0);}
	void dNo(){std::flush(std::cout);puts("No");std::flush(std::cout);exit(0);}
	int gcd(int a,int b){return b?gcd(b,a%b):a;}
	int lcm(int a,int b){return a/gcd(a,b)*b;}
	int fact(int n,int m){int f=n;for(int i=n-1;i>=1;i--){f*=i;f%=m;}return f;}
	template<class T>int chmin(T&a,const T&b){if(b<a){a=b;return 1;}return 0;}
	template<class T>int chmax(T&a,const T&b){if(a<b){a=b;return 1;}return 0;}
	const ll inf=0x1fffffffffffffff;
	const double pi=acos(-1);
	const int mod=1000000007;//998244353
	
	auto _main()
	{
		using namespace std;
		
	}
}



int32_t main(){std::ios::sync_with_stdio(false);std::cin.tie(nullptr);gengar094::_main();return 0;}