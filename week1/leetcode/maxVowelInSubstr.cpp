#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

bool isVowel(char c) {
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int maxVowels(string s, int k) {
    int count = 0 , n = s.size();
    for(int i=0; i<k; i++) {
        if(isVowel(s[i])) count++;
    }
    int mx = count;

    for(int i=k; i<=n-k; i++) {
        if(isVowel(s[i-k])) count--;
        if(isVowel(s[i])) count++;

        mx = max(mx, count);
    }

    return mx;
}

int main() {
    string s = "abciiidf";
    int k = 3;

    cout << maxVowels(s, k) << endl;
    

    return 0;
}