#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <deque>
#include <complex>
#include <stack>
#include <queue>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <ctime>
#include <iterator>
#include <bitset>
#include <numeric>
#include <list>
#include <iomanip>
#include <cassert>
#include <array>
#include <tuple>
#include <initializer_list>
#include <unordered_set>
#include <unordered_map>
#include <forward_list>
#include <random>
#pragma GCC target("avx512f")
#pragma GCC optimize("O3")
#define int long long
#define itn int
#define INT(...) int __VA_ARGS__;in(__VA_ARGS__)
#define I32(...) i32 __VA_ARGS__;in(__VA_ARGS__)
#define I64(...) i64 __VA_ARGS__;in(__VA_ARGS__)
#define U32(...) u32 __VA_ARGS__;in(__VA_ARGS__)
#define U64(...) u64 __VA_ARGS__;in(__VA_ARGS__)
#define STR(...) string __VA_ARGS__;in(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__;in(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__;in(__VA_ARGS__)
#define all(x) (x).begin(),(x).end()
#define Sort(x) sort(all(x))
#define rSort(x) sort(all(x));reverse(all(x))
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

using i32=std::int32_t; using i64=std::int64_t;
using u32=std::uint32_t; using u64=std::uint64_t;
using isize=std::ptrdiff_t; using usize=std::size_t;
using vi=std::vector<int>; using vvi=std::vector<vi>;
using vi32=std::vector<i32>; using vvi32=std::vector<vi32>;
using vi64=std::vector<i64>; using vvi64=std::vector<vi64>;
using vb=std::vector<bool>; using vvb=std::vector<vb>;
using vd=std::vector<double>; using vvd=std::vector<vd>;
using vc=std::vector<char>; using vvc=std::vector<vc>;
using vs=std::vector<std::string>;
using P=std::pair<int,int>; using vp=std::vector<P>;
using pi32=std::pair<int,int>; using pi64=std::pair<i64,i64>;
using vpi32=std::vector<pi32>; using vpi64=std::vector<pi64>;

template<class T>inline bool chmin(T&a,const T&b){if(b<a){a=b;return true;}return false;}
template<class T>inline bool chmax(T&a,const T&b){if(a<b){a=b;return true;}return false;}
int Scan(){return getchar();}
void Scan(signed&a){scanf("%d",&a);} void Scan(unsigned&a){scanf("%u",&a);}
void Scan(long&a){scanf("%ld",&a);} void Scan(long long&a){scanf("%lld",&a);}
void Scan(unsigned long long&a){scanf("%llu",&a);} void Scan(char&a){do{a=getchar();}while(a==' '||a=='\n');}
void Scan(float&a){scanf("%f",&a);} void Scan(double&a){scanf("%lf",&a);}
void Scan(long double&a){scanf("%Lf",&a);} void Scan(std::string&a){std::cin>>a;}
template<class T>void Scan(std::vector<T>&); template<class T,class U>void Scan(std::pair<T,U>&);
template<class T>void Scan(std::vector<T>&a){for(auto&&i:a)Scan(i);} template<class T,class U>void Scan(std::pair<T,U>&a){Scan(a.first);Scan(a.second);}
template<class T>void Scan(T&a){std::cin>>a;}
void in(){}
template<class Car,class...Cdr>void in(Car&&car,Cdr&&...cdr){Scan(car);in(std::forward<Cdr>(cdr)...);}

void Print(){putchar(' ');}
void Print(signed a){printf("%d",a);} void Print(bool a){printf("%d",a);}
void Print(unsigned a){printf("%u",a);} void Print(long a){printf("%ld",a);}
void Print(long long a){printf("%lld",a);} void Print(unsigned long long a){printf("%llu",a);}
void Print(char a){printf("%c",a);} void Print(float a){printf("%f",a);}
void Print(double a){printf("%lf",a);} void Print(long double a){printf("%Lf",a);}
void Print(const std::string&a){for(auto&&i:a)Print(i);} template<class T>void Print(const std::vector<T>&);
template<class T,class U>void Print(const std::pair<T,U>&); template<class T>void Print(const std::vector<T>&a){if(a.empty())return;Print(a[0]);for(auto i=a.begin();++i!=a.end();){putchar(' ');Print(*i);}}
template<class T,class U>void Print(const std::pair<T,U>&a){Print(a.first);putchar(' ');Print(a.second);} template<class T>void Print(const T&a){std::cout<<a;}
void out(){}
template<class T>void out(const T&t){Print(t);putchar('\n');}
template<class Car,class...Cdr>void out(Car&car,Cdr&...cdr){Print(car);putchar(' ');out(std::forward<Cdr>(cdr)...);}

void println(){printf("\n");}
void println(signed x){printf("%d\n",x);} void println(bool x){printf("%d\n",x);}
void println(unsigned x){printf("%u\n",x);} void println(long x){printf("%ld\n",x);}
void println(long long x){printf("%lld\n",x);} void println(unsigned long long x){printf("%llu\n",x);}
void println(char x){printf("%c\n",x);} void println(float x){printf("%.15f\n",x);}
void println(double x){printf("%.15lf\n",x);} template<class T>void println(T x){std::cout<<x<<'\n';}

void yn(bool fl=true){out(fl?"Yes":"No");}
template<class T>void drop(T x){std::cout<<(x)<<std::endl;exit(0);}
void dYes(){std::flush(std::cout);puts("Yes");std::flush(std::cout);exit(0);}
void dNo(){std::flush(std::cout);puts("No");std::flush(std::cout);exit(0);}
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
int fact(int n,int m){int f=n;for(int i=n-1;i>=1;i--){f*=i;f%=m;}return f;}
template<typename T>std::vector<std::pair<T,T>>prime_factor(T n){std::vector<std::pair<T,T>>ret;
for(T i=2;i*i<=n;i++){if(n%i!=0)continue;T tmp=0;while(n%i==0)tmp++,n/=i;ret.emplace_back(std::make_pair(i,tmp));}if(n!=1)ret.emplace_back(std::make_pair(n,1));return ret;}
constexpr i64 inf=0x1fffffffffffffff;
constexpr i64 mod=1000000007LL;
constexpr i64 mod2=998244353LL;
constexpr double eps=1e-8;
constexpr double pi=3.141592653589793238462643383279;


void mainmain()
{
	using namespace std;
	
}


std::int32_t main()
{
	//std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout<<std::fixed<<std::setprecision(15);
	mainmain();
}