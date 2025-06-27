#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,6,3,8,11,0,5};
    int n = 7;
    sort(arr, arr+n);
    for(auto a : arr) cout << a << " ";
    cout << endl;

    int x = 9;

    auto l = lower_bound(arr, arr+n, x) - arr; // value atleast x (x of more than x)
    cout << l << endl;

    auto u = upper_bound(arr, arr+n, x) - arr; // value greater than x (just greater than)
    cout << u << endl;

    auto r = equal_range(arr, arr+n, x); // give no. of element whose value is x
    cout << r.second << " " << r.first << endl;
    cout << r.second - r.first << endl;

    return 0;
}