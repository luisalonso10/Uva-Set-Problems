#include <bits/stdc++.h>
#define pi acos(-1)
#define sz(x) (int) x.size()
#define pii pair<int, int>
#define pill pair<int, long long>
#define mii map<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define vb vector<bool>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define popb pop_back
#define all(v) v.begin(),v.end()
#define mset(v, x) memset(v, x, sizeof(v))
#define mset2d(v, x, n) memset(v, x, sizeof(v[0][0]) * n * n)
#define mset2dd(v, x, n, m) memset(v, x, sizeof(v[0][0]) * n * m)
#define debug(x) cerr<<#x<<" : "<<x<<endl
#define debug2(x,y) cerr<<#x<<" : "<<x<<" & "<<#y<<" : "<<y<<endl
#define test() cerr<<"hola papa"<<endl
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    ll n, p, xi, yi, ans = 0LL;
    cin >> n >> p;
    map<pii, int> e;
    vi d(n + 5);
    vi v(n + 5);
    for (int i = 0; i < n; ++i) {
        cin >> xi >> yi;
        if (xi > yi) swap(xi, yi);
        e[{xi, yi}]++, d[xi]++, d[yi]++;
        v[xi] = d[xi], v[yi] = d[yi];
    }
    sort(v.begin() + 1, v.begin() + 1 + n);
    for (int i = 1; i <= n; ++i) {
        auto it = lower_bound(v.begin() + i + 1, v.begin() + 1 + n, p - v[i]);
        int pos = it - v.begin() - 1;
        ans += max(0LL, n - pos);
    }
    for (auto it: e) {
        int u = it.fi.fi, v = it.fi.se;
        if (d[u] + d[v] >= p && d[u] + d[v] - it.se < p) ans = ans - 1LL;
    }
    cout << ans << "\n";
}
