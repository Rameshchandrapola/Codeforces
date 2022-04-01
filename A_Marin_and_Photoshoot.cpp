
#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
 
using namespace std;
// using namespace chrono;
// using namespace __gnu_pbds;
 
#define me Ramesh chandra pola // My full name
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define mod 1000000007
#define mod1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
// #define sz(x) ((ll)(x).size())
 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
 
#define all(a) a.begin(), a.end()
// #define each(x, a) for (auto &x: a)
// #define forn(i, n) for (int i = 0; i < n; ++i)
// #define forr(i, n) for (int i = n; i >=0; --i)
#define setbits(X) __builtin_popcountll(X)
#define zerobits(X) __builtin_ctzll(X)
#define debug(x) cout << #x << "--> " << x << endl
 
/*---------------------------------------------------------------------------------------------------------------------------*/
ll expo(ll a, ll b, ll m)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}
ll mminvprime(ll a, ll b) { return expo(a, b - 2, b); }
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
} // only for prime m (m id diff for diff problems, 10^9+7...)
// GCD
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
// LCM
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
// Power under mod (a ^ b) % mod
int modpow(int a, int b, int m = mod)
{
    a = a & m;
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a) % m;
        }
        b = b >> 1;
        a = (a * a) % m;
    }
    return ans;
}
/*--------------------------------------------------------------------------------------------------------------------------*/
 
void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    vector<int>vec;
    for(int i=0;i<s.size();i++){
        if(s[i] =='0'){
            vec.pb(i);
        }
    }
    int ans=0;
    for(int i=1;i<vec.size();i++){
        if(vec[i]-vec[i-1] == 1){
            ans+=2;
        }else if(vec[i]-vec[i-1] ==2){
            ans++;
        }
    }
    cout<<ans<<endl;
}
 
int main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

