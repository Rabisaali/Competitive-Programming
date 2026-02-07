#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<LL>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << a[n-1]*n << "\n";
    }
}