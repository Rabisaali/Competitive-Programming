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
        LL x = -1*a[0];
        for (int i=0; i<n; i++) {
            a[i]+=x;
        }
        for (int i=0; i<=n; i++) {
            auto it = find(a.begin(), a.end(), i);
            if (it == a.end()) {
                cout << i << "\n";
                break;
            }
        }
    }
}