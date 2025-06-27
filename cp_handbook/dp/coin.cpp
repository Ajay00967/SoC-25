#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

const int N = 1e8;
const int INF = 1e9 + 7;

vi val(N, -1);

int coinSum(vi & coins, int sum, vi & val) {
    if(sum < 0) return INF;
    if(sum == 0) return 0;

    if(val[sum] != -1) return val[sum];
    int best = INF;

    for(auto c : coins) {
        best = min(best, coinSum(coins, sum - c, val) + 1);
    }
    val[sum] = best;

    return best;
}

int main() {
    val[0] = 0;

    vi coins = {1, 2, 5, 10};
    int sum = 18;
    cin >> sum;

    cout << coinSum(coins, sum, val) << endl;

    return 0;
}