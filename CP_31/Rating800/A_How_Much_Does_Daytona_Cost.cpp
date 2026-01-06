#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        auto ptr = find(a.begin(), a.end(), k);
        if (ptr != a.end()) cout << "YES\n";
        else cout << "NO\n";
    }
}