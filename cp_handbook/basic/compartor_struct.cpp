#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x,y;

public:
    Point(int a=0, int b=0) : x(a), y(b) {}

    double mag() const {
        return sqrt(x*x + y*y);
    }

    double dist(const Point p) const {
        Point d(x-p.x, y-p.y);
        return d.mag();
    }

    bool operator<(const Point &p) const {
        if(x != p.x) return x < p.x;
        else return y < p.y;
    }
};

bool comp(string a, string b) {
    if(a.size() != b.size()) return a.size() < b.size();
    return a < b; // if same size then lexicographically
}

template <typename T>
void print(vector<T> v) {
    for(auto a : v) cout << a << " ";
    cout << endl;
}

int main() {
    vector<string> v = {"a", "z", "bd", "aa", "ab", "abc", "cc", "aaa"};
    print(v);

    sort(v.begin(), v.end());
    print(v);

    sort(v.begin(), v.end(), comp);
    print(v);

    Point p(1,3), q(2,7);
    cout << (p < q) << endl;
    cout << p.dist(q) << endl;


    return 0;
}
