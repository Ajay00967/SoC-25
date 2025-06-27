#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

vi square(vi& arr) {
    int n = arr.size();
    int i = 0, j;
    vi ans;
    while(i < n && arr[i] < 0) { // earlier it was arr[i] && i<n --> wrong ==> check the validity of idx first :)
        i++;
    }
    j = i--;
    // if i remains 0
    // then --> j = 0, i = -1;
    if(i == -1) {
        for(auto a : arr) {
            ans.push_back(a*a);
        }
        return ans;
    }
    while(i >=0 && j < n) {
        int a = arr[i]*arr[i], b = arr[j]*arr[j];
        if(a < b) {
            ans.push_back(a);
            i--;
        } else {
            ans.push_back(b);
            j++;
        }
    }
    while(i >= 0) {
        ans.push_back(arr[i]*arr[i]);
        i--;
    }
    while(j < n) {
        ans.push_back(arr[j]*arr[j]);
        j++;
    }
    return ans;
}

int main() {
    vi a = {-4, -1, 0, 3, 10};

    vi sq = square(a);
    for(auto val : sq) cout << val << " ";
    cout << endl;
    

    return 0;
}