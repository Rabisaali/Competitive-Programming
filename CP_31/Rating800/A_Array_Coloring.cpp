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
        sort(a.begin(), a.end());
        int sum=0;
        for (int i=0; i<n-1; i++) {
            sum+=a[i];
        }
        if ((sum%2)==(a[n-1]%2)) cout << "YES\n";
        else cout << "NO\n";
    }
}