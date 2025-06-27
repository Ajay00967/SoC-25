#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f(i, l, n) for(decltype(n) i = l; (l < n) ? i < n : i > n; (l < n) ? i++ : i--)
#define ll long long
#define pb push_back
#define endl '\n'
#define v(x) vector<x>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define in(v,n) for(auto &x : v) cin >> x;
#define out(v,n) f(i,0,n) cout << v[i] << " "; cout << endl
#define debug(x) cerr << #x << " is " << x << " "
#define yn(check) cout << (check ? "YES" : "NO") << "\n"
#define inp(type, ...) type __VA_ARGS__; read(__VA_ARGS__)
#define print(...) write(__VA_ARGS__)

const ll MOD = 1e9 + 7;

template<typename T>
void read(T& x) {
    cin >> x;
}

template<typename T, typename... Args>
void read(T& x, Args&... args) {
    cin >> x;
    read(args...);
}

template<typename T>
void write(T x) {
    cout << x << endl;
}

template<typename T, typename... Args>
void write(T x, Args... args) {
    cout << x << " ";
    write(args...);
}

using vi = vector<ll>;
using vvi = vector<vi>;
using pi = pair<ll,ll>;
using vpi = vector<pi>;
using si = set<ll>;
using msi = multiset<ll>;
using mi = map<ll,ll>;
using umi = unordered_map<ll,ll>;

ll mex(set<ll> &arr){ll mex = 0;for(auto val:arr){if(val==mex)mex+=1;else break;} return mex;}

void solve() {
    inp(int,n,k);
    vi a(n), b(n);
    in(a,n);
    in(b,n);
    sort(all(a));
    sort(rall(b));
    ll idx = 0;
    while(k-- && idx < n && a[idx] < b[idx] ) {
        swap(a[idx], b[idx]);
        idx++;
    }
    ll sum = 0;
    for(auto x : a) sum += x;
    print(sum);
}

int main() {
    fastio;
    // solve();
    inp(ll, t);
    while (t--) {
        solve();
    }
    return 0;
}