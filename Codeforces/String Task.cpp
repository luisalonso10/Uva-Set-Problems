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

string s;
string result = "";

vi v(27 + 5);

int main() {
    v['A' - 'A'] = v['E' - 'A'] = v['I' - 'A'] = v['O' - 'A'] = v['U' - 'A'] = v['Y' - 'A'] = 1;
    cin >> s;
    for (int i = 0; i < sz(s); ++i) {
        if (!(s[i] & 32) && !v[s[i] - 'A']) {
            result.pb('.');
            result.pb((char) 'a' + (s[i] - 'A'));
        } else {
            char x = tolower(s[i]);
            if (!v[x - 'a']) {
                result.pb('.');
                result.pb(s[i]);
            }
        }
    }
    cout << result << "\n";
}
