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
namespace gengar
{
	using namespace std;
	#define int long long
	#define itn int
	#define uint unsigned long long
	#define ld long double
	#define vt(tp) vector<tp>
	#define vvt(tp) vector<vector<tp>>
	#define vvt2(nm,tp,h,w,n) vector<vector<tp>>nm((h),vector<tp>(w,n))
	#define P pair<int,int>
	#define hmap unordered_map
	#define hset unordered_set
	#define all(x) x.begin(),x.end()
	#define nsort(x) sort(all(x))
	#define rsort(x) nsort(x);reverse(all(x))
	#define unq(v) v.erase(unique(all(v)),v.end())
	#define l_b(c,x) distance(c.begin(),lower_bound(all(c),(x)))
	#define u_b(c,x) distance(c.begin(),upper_bound(all(c),(x)))
	#define fi first
	#define se second
	#define mp make_pair
	#define pb push_back
	#define eb emplace_back
	#define spc ' '
	#define pass 
	#define _overload3(_1,_2,_3,name,...) name
	#define _rep(i,n) repi(i,0,n)
	#define repi(i,a,b) for(int i=(a),__SIZE##_=(b);i<__SIZE##_;i++)
	#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
	#define rrep(i,n) for(int i=1,__SIZE##_=(n);i<__SIZE##_;i++)
	#define repp(i,n) for(int i=0,__SIZE##_=(n);i<=__SIZE##_;i++)
	#define per(i,n) for(int i=(n)-1;i>=0;i--)
	#define pper(i,n) for(int i=(n)-1;i>=1;i--)
	#define perr(i,n) for(int i=(n);i>=0;i--)
	#define Bit(n) (1LL<<(n))
	#define myceil(a,b) ((a)+((b)-1))/(b)
	#define scale(n) cout<<fixed<<setprecision(n)
	using i64=int64_t;
	using u64=uint64_t;
	template<class T>using PQ=priority_queue<T,vt(T),greater<T>>;
	void in(){}
	template<class Car,class...Cdr>
	void in(Car&&car,Cdr&&...cdr){cin>>car;in(forward<Cdr>(cdr)...);}
	template<class T>void drop(T x){cout<<(x)<<endl;exit(0);}
	void dYes(){puts("Yes");exit(0);}
	void dNo(){puts("No");exit(0);}
	int gcd(int a,int b){return b?gcd(b,a%b):a;}
	int lcm(int a,int b){return a/gcd(a,b)*b;}
	int fact(int n,int m){int f=n;pper(i,n){f*=i;f%=m;}return f;}
	template<class T>int chmin(T&a,const T&b){if(b<a){a=b;return 1;}return 0;}
	template<class T>int chmax(T&a,const T&b){if(a<b){a=b;return 1;}return 0;}
	const int inf=Bit(60);
	const double pi=acos(-1);
	const int mod=1000000007;//998244353
};
using namespace gengar;

int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	return 0;
}