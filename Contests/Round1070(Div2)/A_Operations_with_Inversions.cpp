#include <bits/stdc++.h>
using namespace std;
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
        int count = 0;
        int max = a[0];
        for (int i=1; i<n; i++) {
            if (a[i]<max) {
                count++;
            }
            else {
                max=a[i];
            }
        }
        cout << count << "\n";
    }
}