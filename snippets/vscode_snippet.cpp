#include<algorithm>
#include<array>
#include<bitset>
#include<cassert>
#include<climits>
#include<cmath>
#include<cstring>
#include<deque>
#include<functional>
#include<iostream>
#include<iomanip>
#include<map>
#include<numeric>
#include<optional>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<tuple>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#pragma GCC optimize("Ofast")
#define int long long
#define itn int
#define vt(tp) vector<tp>
#define vvt(tp) vector<vector<tp>>
#define vvt2(nm,tp,h,w,n) vector<vector<tp>>nm((h),vector<tp>(w,n))
#define P pair<int,int>
#define hmap unordered_map
#define hset unordered_set
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
namespace gengar
{
	using i32=int32_t;
	using i64=int64_t;
	using u32=uint32_t;
	using u64=uint64_t;
	using isize=ptrdiff_t;
	using usize=size_t;
	using ll=long long;
	using ull=unsigned long long;
	template<class T>using PQ=std::priority_queue<T,std::vector<T>,std::greater<T>>;
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
};
using namespace gengar;

int32_t main()
{
	using namespace std;
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	return 0;
}