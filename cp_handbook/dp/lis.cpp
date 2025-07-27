#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

// O(nlogn)
int LIS(vi arr) {
    vi ans = {arr[0]};

    for (int i=1; i<arr.size(); i++) {
        if (ans.back() < arr[i]) {
            ans.push_back(arr[i]);
        } else {
            auto it = lower_bound(ans.begin(), ans.end(), arr[i]);
            *it = arr[i];
        }
    }

    return ans.size();
}

int main() {
    vi arr = {6, 2, 5, 1, 7, 4, 8, 3};

    int n = arr.size();
    vi length(n);
    vi prev(n, -1);
    
    // O(n^2)
    for (int i=0; i<n; i++) {
        length[i] = 1;

        for (int j=0; j<i; j++) {
            if (arr[j] < arr[i]) {
                if (length[j] + 1 > length[i]) {
                    length[i] = length[j] + 1;
                    prev[i] = j;
                }
            }
        }
    }

    auto mx = max_element(length.begin(), length.end()) - length.begin();
    int t = mx;
    vi ans;
    cout << length[mx] << endl;
    while (t >= 0) {
        ans.push_back(arr[t]);
        t = prev[t];
    }
    reverse(ans.begin(), ans.end());
    for (auto x : ans) cout << x << " ";
    cout << endl;

    // cout << LIS(arr) << endl;

    return 0;
}