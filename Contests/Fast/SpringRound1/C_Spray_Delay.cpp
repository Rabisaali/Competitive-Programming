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
        sort(a.begin(), a.end());
        a[0]-=k;
        LL product = 1;
        for (int i=0; i<n; i++) {
            product*=a[i];
        }
        cout << product << "\n";
    }
}