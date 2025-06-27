#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target) {
    int k = 0;
    int n = arr.size();

    for(int b = n/2; b > 0; b /= 2) {
        while(k+b < n && arr[k+b]<=target) k += b; // this loop will run at most twice only :)
    }

    if(arr[k] == target) return k;
    else return -1;
}

int main() {
    vector<int> v = {1,2,5,6,8,11,14,18};
    int target = 14;

    cout << binarySearch(v, target) << endl;

    return 0;
}
