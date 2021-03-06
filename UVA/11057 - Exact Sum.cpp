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
#define mod(x, m) ((x % m) + m) % m
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

const int MAX = 1000005;

ll n, p;

int main() {
    while (cin >> n) {
        ll ans1 = MAX + 10, ans2 = -1;
        map<ll, ll> m;
        vector< ll > v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            ++m[v[i]];
        }
        sort(all(v));
        cin >> p;
        for (int i = 0; i < n; ++i) {
            if (p - v[i] >= 0 && m[p - v[i]] > 0) {
                ll a = v[i], b = p - v[i];
                if (abs(a - b) < abs(ans1 - ans2)) {
                    ans1 = min(a, b);
                    ans2 = max(a, b);
                }
            }
        }
        cout << "Peter should buy books whose prices are "<< ans1 << " and " << ans2 << ".\n\n";
    }
}