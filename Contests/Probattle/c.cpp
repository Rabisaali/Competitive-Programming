#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int n;
    cin >> n;
    multimap<LL, string>b;
    for (int i=0; i<n; i++) {
        string s;
        LL a;
        cin >> a >> s;
        b.insert({a, s});
    }
    for (auto& it: b) {
        cout << it.first << " " << it.second << "\n";
    }
}