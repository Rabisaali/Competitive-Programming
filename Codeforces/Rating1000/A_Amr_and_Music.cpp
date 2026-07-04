#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int n;
    cin >> n;
    LL k;
    cin >> k;
    int a;
    vector<pair<int, int>>v;
    for (int i=0; i<n; i++) {
        cin >> a;
        v.push_back({a, i+1});
    }
    sort(v.begin(), v.end());
    vector<int>b;
    for (auto& p: v) {
        k -= p.first;
        if (k >=0) b.push_back(p.second);
        else break;
    }
    int len = b.size();
    cout << len << "\n";
    sort(b.begin(), b.end());
    for (auto& p: b) {
        cout << p << " ";
    }
}