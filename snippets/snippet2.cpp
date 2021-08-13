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
#define li long long
#define itn int
#define INT(...)     \
	int __VA_ARGS__; \
	in(__VA_ARGS__)
#define LI(...)    \
	li __VA_ARGS__; \
	in(__VA_ARGS__)
#define I32(...)     \
	i32 __VA_ARGS__; \
	in(__VA_ARGS__)
#define I64(...)     \
	i64 __VA_ARGS__; \
	in(__VA_ARGS__)
#define U32(...)     \
	u32 __VA_ARGS__; \
	in(__VA_ARGS__)
#define U64(...)     \
	u64 __VA_ARGS__; \
	in(__VA_ARGS__)
#define STR(...)        \
	string __VA_ARGS__; \
	in(__VA_ARGS__)
#define CHR(...)      \
	char __VA_ARGS__; \
	in(__VA_ARGS__)
#define DBL(...)        \
	double __VA_ARGS__; \
	in(__VA_ARGS__)
#define all(x) (x).begin(), (x).end()
#define rsort(x)  \
	sort(all(x)); \
	reverse(all(x))
#define unq(v) v.erase(unique(all(v)), v.end())
#define l_b(c, x) distance(c.begin(), lower_bound(all(c), (x)))
#define u_b(c, x) distance(c.begin(), upper_bound(all(c), (x)))
#define fi first
#define se second
#define mkpr make_pair
#define pb push_back
#define eb emplace_back
#define spc ' '
#define pass
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for (int i = (a), __B_SIZE__ = (b); i < __B_SIZE__; i++)
#define _per(i, n) peri(i, n, 0)
#define peri(i, a, b) for (int i = (a), __B_SIZE__ = (b); i >= __B_SIZE__; i--)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
#define per(...) _overload3(__VA_ARGS__, peri, _per, )(__VA_ARGS__)
#define bitshift(n) (1LL << (n))
#define myceil(a, b) ((a) + ((b)-1)) / (b)

namespace gengar094 {

using i32 = std::int32_t;
using i64 = std::int64_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;
using isize = std::ptrdiff_t;
using usize = std::size_t;
using vi = std::vector<int>;
using vvi = std::vector<vi>;
using vli = std::vector<li>;
using vvli = std::vector<vli>;
using vi32 = std::vector<i32>;
using vvi32 = std::vector<vi32>;
using vi64 = std::vector<i64>;
using vvi64 = std::vector<vi64>;
using vb = std::vector<bool>;
using vvb = std::vector<vb>;
using vd = std::vector<double>;
using vvd = std::vector<vd>;
using vc = std::vector<char>;
using vvc = std::vector<vc>;
using vs = std::vector<std::string>;
using vpii = std::vector<std::pair<int, int>>;
using vpli = std::vector<std::pair<li, li>>;
using P = std::pair<int, int>;

template <class T>
inline bool chmin(T &a, const T &b)
{
	if (b < a)
	{
		a = b;
		return true;
	}
	return false;
}
template <class T>
inline bool chmax(T &a, const T &b)
{
	if (a < b)
	{
		a = b;
		return true;
	}
	return false;
}
int Scan() { return getchar(); }
void Scan(signed &a) { scanf("%d", &a); }
void Scan(unsigned &a) { scanf("%u", &a); }
void Scan(long &a) { scanf("%ld", &a); }
void Scan(long long &a) { scanf("%lld", &a); }
void Scan(unsigned long long &a) { scanf("%llu", &a); }
void Scan(char &a)
{
	do
	{
		a = getchar();
	} while (a == ' ' || a == '\n');
}
void Scan(float &a) { scanf("%f", &a); }
void Scan(double &a) { scanf("%lf", &a); }
void Scan(long double &a) { scanf("%Lf", &a); }
void Scan(std::string &a) { std::cin >> a; }
template <class T>
void Scan(std::vector<T> &);
template <class T, class U>
void Scan(std::pair<T, U> &);
template <class T>
void Scan(std::vector<T> &a)
{
	for (auto &&i : a)
		Scan(i);
}
template <class T, class U>
void Scan(std::pair<T, U> &a)
{
	Scan(a.first);
	Scan(a.second);
}
template <class T>
void Scan(T &a) { std::cin >> a; }
void in() {}
template <class Car, class... Cdr>
void in(Car &&car, Cdr &&...cdr)
{
	Scan(car);
	in(std::forward<Cdr>(cdr)...);
}

void Print() { putchar(' '); }
void Print(signed a) { printf("%d", a); }
void Print(bool a) { printf("%d", a); }
void Print(unsigned a) { printf("%u", a); }
void Print(long a) { printf("%ld", a); }
void Print(long long a) { printf("%lld", a); }
void Print(unsigned long long a) { printf("%llu", a); }
void Print(char a) { printf("%c", a); }
void Print(float a) { printf("%f", a); }
void Print(double a) { printf("%lf", a); }
void Print(long double a) { printf("%Lf", a); }
void Print(const std::string &a)
{
	for (auto &&i : a)
		Print(i);
}
template <class T>
void Print(const std::vector<T> &);
template <class T, class U>
void Print(const std::pair<T, U> &);
template <class T>
void Print(const std::vector<T> &a)
{
	if (a.empty())
		return;
	Print(a[0]);
	for (auto i = a.begin(); ++i != a.end();)
	{
		putchar(' ');
		Print(*i);
	}
}
template <class T, class U>
void Print(const std::pair<T, U> &a)
{
	Print(a.first);
	putchar(' ');
	Print(a.second);
}
template <class T>
void Print(const T &a) { std::cout << a; }
void out() {}
template <class T>
void out(const T &t)
{
	Print(t);
	putchar('\n');
}
template <class Car, class... Cdr>
void out(Car &car, Cdr &...cdr)
{
	Print(car);
	putchar(' ');
	out(std::forward<Cdr>(cdr)...);
}

void println() { printf("\n"); }
void println(signed x) { printf("%d\n", x); }
void println(bool x) { printf("%d\n", x); }
void println(unsigned x) { printf("%u\n", x); }
void println(long x) { printf("%ld\n", x); }
void println(long long x) { printf("%lld\n", x); }
void println(unsigned long long x) { printf("%llu\n", x); }
void println(char x) { printf("%c\n", x); }
void println(float x) { printf("%.15f\n", x); }
void println(double x) { printf("%.15lf\n", x); }
template <class T>
void println(T x) { std::cout << x << '\n'; }

void yn(bool fl = true) { out(fl ? "Yes" : "No"); }
template <class T>
void drop(T x)
{
	std::cout << (x) << std::endl;
	exit(0);
}
void dYes()
{
	std::flush(std::cout);
	puts("Yes");
	std::flush(std::cout);
	exit(0);
}
void dNo()
{
	std::flush(std::cout);
	puts("No");
	std::flush(std::cout);
	exit(0);
}
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }
int fact(int n, int m)
{
	int f = n;
	for (int i = n - 1; i >= 1; i--)
	{
		f *= i;
		f %= m;
	}
	return f;
}
template <typename T>
std::vector<std::pair<T, T>> prime_factor(T n)
{
	std::vector<std::pair<T, T>> ret;
	for (T i = 2; i * i <= n; i++)
	{
		if (n % i != 0)
			continue;
		T tmp = 0;
		while (n % i == 0)
			tmp++, n /= i;
		ret.push_back(std::make_pair(i, tmp));
	}
	if (n != 1)
		ret.push_back(std::make_pair(n, 1));
	return ret;
}
constexpr li inf = 0x1fffffffffffffff;
constexpr li mod = 1000000007LL; //998244353
constexpr double eps = 1e-8;
constexpr double pi = 3.141592653589793238462643383279;

//union-find
struct uni
{
	int n_;
	std::vector<int> par, siz;
	uni(int n) : n_(n), par(n), siz(n, 1LL)
	{
		for (int i = 0; i < n; i++)
			par[i] = i;
	}
	void init(int n)
	{
		par.resize(n);
		siz.assign(n, 1LL);
		for (int i = 0; i < n; i++)
			par[i] = i;
	}
	void merge(int x, int y)
	{
		int rx = root(x);
		int ry = root(y);
		if (rx == ry)
			return;
		if (siz[rx] < siz[ry])
			std::swap(rx, ry);
		siz[rx] += siz[ry];
		par[ry] = rx;
		return;
	}
	int root(int x) { return par[x] == x ? x : par[x] = root(par[x]); }
	bool same(int x, int y) { return root(x) == root(y); }
	int size(int x) { return siz[root(x)]; }
	std::vector<std::vector<int>> groups()
	{
		std::vector<int> rbuf(n_), grsiz(n_);
		for (int i = 0; i < n_; i++)
			grsiz[(rbuf[i] = root(i))]++;
		std::vector<std::vector<int>> res(n_);
		for (int i = 0; i < n_; i++)
			res[i].reserve(grsiz[i]);
		for (int i = 0; i < n_; i++)
			res[rbuf[i]].push_back(i);
		res.erase(remove_if(res.begin(), res.end(), [&](const std::vector<int> &v)
							{ return v.empty(); }),
					res.end());
		return res;
	}
};

//Segtree
template <typename T>
struct segtree
{
	using F = std::function<T(T, T)>;
	int sz;
	std::vector<T> seg;
	const F f;
	const T m1;
	segtree(int n, const F f, const T &m1) : f(f), m1(m1)
	{
		for (sz = 1; sz < n; sz <<= 1)
			;
		seg.assign(2 * sz, m1);
	}
	void update(int k, const T &x)
	{
		k += sz;
		seg[k] = x;
		for (; k >>= 1;)
			seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);
	}
	void set(int k, const T &x) { seg[k + sz] = x; }
	void build()
	{
		for (int k = sz - 1; k > 0; k--)
			seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);
	}
	T query(int a, int b)
	{
		T L = m1, R = m1;
		for (a += sz, b += sz; a < b; a >>= 1, b >>= 1)
		{
			if (a & 1)
				L = f(L, seg[a++]);
			if (b & 1)
				R = f(seg[--b], R);
		}
		return f(L, R);
	}
	T operator[](const int &k) const { return seg[k + sz]; }
	template <typename C>
	int find_subtree(int a, const C &check, T &M, bool type)
	{
		for (; a < sz;)
		{
			T nxt = type ? f(seg[2 * a + type], M) : f(M, seg[2 * a + type]);
			if (check(nxt))
				a = 2 * a + type;
			else
				M = nxt, a = 2 * a + 1 - type;
		}
		return a - sz;
	}
	template <typename C>
	int find_first(int a, const C &check)
	{
		T L = m1;
		if (a <= 0)
			return check(f(L, seg[1])) ? find_subtree(1, check, L, false) : -1;
		int b = sz;
		for (a += sz, b += sz; a < b; a >>= 1, b >>= 1)
		{
			if (a & 1)
			{
				T nxt = f(L, seg[a]);
				if (check(nxt))
					return find_subtree(a, check, L, false);
				L = nxt;
				a++;
			}
		}
		return -1;
	}
	template <typename C>
	int find_last(int b, const C &check)
	{
		T R = m1;
		if (b >= sz)
			return check(f(seg[1], R)) ? find_subtree(1, check, R, true) : -1;
		int a = sz;
		for (b += sz; a < b; a >>= 1, b >>= 1)
		{
			if (b & 1)
			{
				T nxt = f(seg[--b], R);
				if (check(nxt))
					return find_subtree(b, check, R, true);
				R = nxt;
			}
		}
		return -1;
	}
};

// SegmentTree(n, f, M1):= サイズ n の初期化。
// f : 2つの区間の要素をマージする二項演算,
// M1 はモノイドの単位元である。
// set(k, x):= k 番目の要素に x を代入する。
// build():= セグメント木を構築する。
// query(a, b):= 区間 [a, b) に対して二項演算した結果を返す。
// update(k, x):= k 番目の要素を x に変更する。
// operator[k] := k 番目の要素を返す。
// find_first(a, check) := [a,x) が check を満たす最初の要素位置 x を返す。
// find_last(b, check) := [x,b) が check を満たす最後の要素位置 x を返す。
// for example : segtree<int>seg(n,[](int a,int b){return min(a,b);},INT32_MAX);

template <typename T>
struct compress_vector
{
	int n;
	std::vector<T> a;
	compress_vector(int n_) : n(n_), a(n_){};
	void compress()
	{
		std::map<T, T> mp;
		for (int i = 0; i < n; i++)
			mp[a[i]] = -1;
		int c = 0;
		for (auto &p : mp)
			p.second = c++;
		for (int i = 0; i < n; i++)
			a[i] = mp[a[i]];
	}
};

struct LCA
{
	std::vector<std::vector<int>> par;
	std::vector<int> dis;
	LCA(const std::vector<std::vector<int>> &g, int root = 0) { init(g, root); }
	void init(const std::vector<std::vector<int>> &g, int root = 0)
	{
		int v = g.size(), k = 1;
		for (; 1 << k < v; k++)
			;
		par.assign(k, std::vector<int>(v, -1));
		dis.assign(v, -1);
		dfs(g, root, -1, 0);
		for (int i = 0; i < k - 1; i++)
			for (int j = 0; j < v; j++)
			{
				if (par[i][j] < 0)
					par[i + 1][j] = -1;
				else
					par[i + 1][j] = par[i][par[i][j]];
			}
	}
	void dfs(const std::vector<std::vector<int>> &g, int v, int p, int d)
	{
		par[0][v] = p;
		dis[v] = d;
		for (int e : g[v])
			if (e != p)
				dfs(g, e, v, d + 1);
	}
	int run(int u, int v)
	{
		if (dis[u] < dis[v])
			std::swap(u, v);
		int k = par.size();
		for (int i = 0; i < k; i++)
			if (dis[u] - dis[v] >> i & 1)
				u = par[i][u];
		if (u == v)
			return u;
		for (int i = k - 1; i >= 0; i--)
			if (par[i][u] != par[i][v])
			{
				u = par[i][u];
				v = par[i][v];
			}
		return par[0][u];
	}
	int getdis(int u, int v) { return dis[u] + dis[v] - dis[run(u, v)] * 2; }
	bool isonpath(int u, int v, int a) { return getdis(u, a) + getdis(a, v) == getdis(u, v); }
};

template <long long Mod>
struct modInt
{
	long long x;
	constexpr modInt() noexcept : x() {}
	template <typename T>
	constexpr modInt(T v = 0) noexcept : x(v % Mod)
	{
		if (x < 0)
			x += Mod;
	}
	constexpr long long getval() const noexcept { return x; }
	constexpr modInt operator-() const noexcept { return x ? Mod - x : 0; }
	constexpr modInt operator+(const modInt &r) const noexcept { return modInt(*this) += r; }
	constexpr modInt operator-(const modInt &r) const noexcept { return modInt(*this) -= r; }
	constexpr modInt operator*(const modInt &r) const noexcept { return modInt(*this) *= r; }
	constexpr modInt operator/(const modInt &r) const noexcept { return modInt(*this) /= r; }
	constexpr modInt &operator+=(const modInt &r) noexcept
	{
		x += r.x;
		if (x >= Mod)
			x -= Mod;
		return *this;
	}
	constexpr modInt &operator-=(const modInt &r) noexcept
	{
		x -= r.x;
		if (x < 0)
			x += Mod;
		return *this;
	}
	constexpr modInt &operator*=(const modInt &r) noexcept
	{
		x = x * r.x % Mod;
		return *this;
	}
	constexpr modInt &operator/=(const modInt &r) noexcept
	{
		x = x * r.inv().getval() % Mod;
		return *this;
	}
	constexpr modInt powm(long long n) noexcept
	{
		if (n < 0)
			return powm(-n).inv();
		modInt x = *this, r = 1;
		for (; n; x *= x, n >>= 1)
			if (n & 1)
				r *= x;
		return r;
	}
	constexpr modInt inv() const noexcept
	{
		long long a = x, b = Mod, u = 1, v = 0;
		while (b)
		{
			long long t = a / b;
			a -= t * b;
			std::swap(a, b);
			u -= t * v;
			std::swap(u, v);
		}
		return modInt(u);
	}
	constexpr modInt comb(long long a) noexcept
	{
		modInt n = *this, s = 1;
		for (int i = 0; i < a; i++)
			s *= (n - modInt(i));
		modInt m = 1;
		for (int i = 1; i <= a; i++)
			m *= modInt(i);
		return s * m.powm(Mod - 2); //Fermat's little thm
	}
	constexpr bool operator==(const modInt &r) { return this->x == r.x; }
	constexpr bool operator!=(const modInt &r) { return this->x != r.x; }
	friend std::ostream &operator<<(std::ostream &os, const modInt<Mod> &a) { return os << a.x; }
	friend std::istream &operator>>(std::istream &is, modInt<Mod> &a)
	{
		long long v;
		is >> v;
		a = modInt<Mod>(v);
		return is;
	}
};

using mint = modInt<mod>;

void mainmain()
{
	using namespace std;
	
}


}
std::int32_t main()
{
	//std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout << std::fixed << std::setprecision(15);
	gengar094::mainmain();
}