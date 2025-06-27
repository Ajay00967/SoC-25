#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f(i, l, n) for(decltype(n) i = l; (l < n) ? i < n : i > n; (l < n) ? i++ : i--)
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
using msi = multiset<ll>;
using mi = map<ll,ll>;
using umi = unordered_map<ll,ll>;

ll mex(set<ll> &arr){ll mex = 0;for(auto val:arr){if(val==mex)mex+=1;else break;} return mex;}

void solve() {
    inp(ll, n, m, k);
    vi a, b;
    in(a, n); // applicant desire
    in(b, m); // apartment size
    sort(all(a));
    sort(all(b));
    ll i = 0, j = 0, count = 0;
    while(i < n && j < m) {
        if(abs(a[i]-b[j]) <= k) {
            count++,i++,j++;
        } else if(b[j] < a[i] - k) {
            j++;
        } else {
            i++;
        }
    }
    print(count);
}

int main() {
    fastio;
    solve();
    return 0;
}