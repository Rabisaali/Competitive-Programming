#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int ans = a[0]%2;
        int flag=0;
        for (int i=2; i<n; i+=2) {
            if (a[i]%2!=ans) {
                flag=1;
                break;
            }
        }
        if (flag!=1) {
            for (int i=1; i<n; i+=2) {
                if (a[i]%2 == ans) {
                    flag=1;
                    break;
                }
            }
        }
        if (flag==1) cout << "NO\n";
        else cout << "YES\n";
    }
}
