#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vc = vector<char>;
using vs = vector<string>;

int func(vi& a) {
    int n=0;
    for(auto x : a) {
        n ^= x;
    }
    return n;
}

int main() {
    vi v = {2,2,1,1,1};
    cout << func(v) << endl;

    return 0;
}