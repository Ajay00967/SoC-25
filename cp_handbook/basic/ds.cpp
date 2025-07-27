#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

void print(vi arr) {
    for(auto x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    vi arr = {1,3,2,8,8,9};

    print(arr);
    random_shuffle(arr.begin(), arr.end());
    print(arr);

    return 0;
}