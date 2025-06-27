#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f(i, l, n) for(decltype(n) i = l; (l < n) ? i < n : i > n; (l < n) ? i++ : i--)
#define fe(ds) for(auto x : ds)
#define ll long long
#define pb push_back
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define in(v,n) v.resize(n); for(auto &x : v) cin >> x;
#define out(v,n) f(i,0,n) cout << v[i] << " "; cout << endl
#define debug(x) cerr << #x << " is " << x << " "
#define yn(check) cout << (check ? "YES" : "NO") << "\n"
#define inp(type, ...) type __VA_ARGS__; read(__VA_ARGS__)
#define print(...) write(__VA_ARGS__)

const ll MOD = 1e9 + 7;
const long double eps = 1e-9;

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
using usi = unordered_set<ll>;
using msi = multiset<ll>;
using mi = map<ll,ll>;
using umi = unordered_map<ll,ll>;

ll mex(set<ll> &arr){ll mex = 0;for(auto val:arr){if(val==mex)mex+=1;else break;} return mex;}

void solve() {
    inp(ll, n);
    vi a;
    in(a, n);
    if(n < 2) {
        print(-1);
        return;
    }
    // ll c = 0, mn = INT_MAX;
    // usi s;  
    // fe(a) {
    //     c++;
    //     if(s.find(x) != s.end()) {
    //         mn = min(mn, c);
    //         c = 1;
    //         s.clear();
    //     }
    //     s.insert(x);
    // }
    // print(mn);

    umi last;
    ll ans = n+1;
    f(i,0,n) {
        if(last.count(a[i])) { 
            ans = min(ans, i + 1 - last[a[i]]);
        }
        last[a[i]] = i;
    }
    if(ans == n+1) {
        print(-1);
    } else print(ans);
}

bool multi = true;

int main() {
    fastio;
    ll t = 1;
    if (multi) cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}