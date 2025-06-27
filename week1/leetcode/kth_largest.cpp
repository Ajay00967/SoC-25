#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int kth_largest(vi& arr, int k) {
    sort(arr.rbegin(), arr.rend());
    return arr[k];
}

int main() {
    vi v = {3,2,1,5,6,4};
    int k = 2;

    cout << kth_largest(v, k) << endl;
    

    return 0;
}