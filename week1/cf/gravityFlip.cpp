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
#define inp(t,n) t n; cin >> n
#define in(v,n) f(i,0,n) cin >> v[i];
#define out(v,n) f(i,0,n) cout << v[i] << " "; cout<<endl;
#define debug(x) cerr << #x << " is " << x << " "
#define yn(check) cout << (check ? "YES" : "NO") << "\n"
#define print(n) cout << n << "\n"

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
    inp(int, n);
    vi a(n);
    in(a,n);
    sort(all(a));
    out(a,n);
}

int main() {
    fastio;
    solve();
    // ll t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    return 0;
}