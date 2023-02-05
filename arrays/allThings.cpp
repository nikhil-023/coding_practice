#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

const int mod = 1000000007;
#define frr(i, a, b) for (int i = a; i < b; i++)
#define fr(i, a) for (int i = 0; i < a; i++)
#define ff first
#define ss second
#define int long long
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vvii vector<vector<int>> edges(n, vector<int>());
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
//#define mod             1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
	int x;    \
	cin >> x; \
	while (x--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

//--number theory
#define ll long long
ll gcd(ll a, ll b)
{
	if (b > a)
	{
		return gcd(b, a);
	}
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}
ll expo(ll a, ll b, ll mod)
{
	ll res = 1;
	while (b > 0)
	{
		if (b & 1)
			res = (res * a) % mod;
		a = (a * a) % mod;
		b = b >> 1;
	}
	return res;
}
// ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) { return expo(a, b - 2, b); }
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact)
{
	ll val1 = fact[n];
	ll val2 = ifact[n - r];
	ll val3 = ifact[r];
	return (((val1 * val2) % m) * val3) % m;
}
vector<ll> sieve(int n)
{
	int *arr = new int[n + 1]();
	vector<ll> vect;
	for (int i = 2; i <= n; i++)
		if (arr[i] == 0)
		{
			vect.push_back(i);
			for (int j = 2 * i; j <= n; j += i)
				arr[j] = 1;
		}
	return vect;
}
ll mod_add(ll a, ll b, ll m)
{
	a = a % m;
	b = b % m;
	return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
	a = a % m;
	b = b % m;
	return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
	a = a % m;
	b = b % m;
	return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m)
{
	a = a % m;
	b = b % m;
	return (mod_mul(a, mminvprime(b, m), m) + m) % m;
} // only for prime m

ll phin(ll n)
{
	ll number = n;
	if (n % 2 == 0)
	{
		number /= 2;
		while (n % 2 == 0)
			n /= 2;
	}
	for (ll i = 3; i <= sqrt(n); i += 2)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
				n /= i;
			number = (number / i * (i - 1));
		}
	}
	if (n > 1)
		number = (number / n * (n - 1));
	return number;
} // O(sqrt(N))
// ends here

bool seive[1000000];
int N = 1000000;
int M = 1e9 + 7;
void createseive()
{
	for (int i = 2; i <= N; i++)
	{
		seive[i] = true;
	}
	for (int i = 2; i <= N; i++)
	{
		if (seive[i] == true)
		{
			for (int j = 2 * i; j <= N; j += i)
			{
				seive[j] = false;
			}
		}
	}
}
/*----------------------------------------------------------------------------------------------------------*/

void solve()
{

	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	cout << a[1] << endl;
}
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	w(t)

		solve();
	cerr << endl
		 << "Finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
}