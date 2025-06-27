#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vc = vector<char>;
using vs = vector<string>;

vi func(vi& a, vi& b) {
    vi c;
    map<int,int> m;
    for(auto x : a) {
        m[x]++;
    }
    for(auto x : b) {
        int count = m[x];
        while(count--) c.push_back(x);
        m.erase(x);
    }
    for(auto& [val, freq] : m) {
        while(freq--) c.push_back(val);
    }
    return c;
}

int main() {
    vi v1 = {2,3,1,3,2,4,6,7,9,2,19};
    vi v2 = {2,1,4,3,9,6};

    vi sorted = func(v1, v2);
    for(auto x : sorted) cout << x << " ";
    cout << endl;
    

    return 0;
}