#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        if (a[0]==a[n-1]) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            cout << a[n-1] << " " << a[0] << " ";
            for (int i=1; i<n-1; i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
    }
}