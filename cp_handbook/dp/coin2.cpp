#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

const int N = 1e7;
const int INF = 1e9 + 7;

int main() {
    vi val(N, -1);
    vi first(N, -1);
    val[0] = 0;

    vi coins = {1, 3, 4, 7};
    int x = 13;
    cin >> x;

    for(int i=1; i<=x; i++) {
        val[i] = INF;

        for(auto c : coins) {
            if(i >= c) {
                if(val[i-c]+1 < val[i]) {
                    val[i] = val[i-c] + 1;
                    first[i] = c;
                }
            }
        }
    }
    cout << val[x] << endl;
    int n = x;
    while (n) {
        cout << first[n] << " ";
        n -= first[n];
    }
    cout << endl;

    return 0;
}