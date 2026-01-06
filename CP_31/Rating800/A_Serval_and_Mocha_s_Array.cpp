#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <LL>a(n);
        for (int i=0; i<n; i++) {
            cin >>a[i];
        }
        int flag=0;
        for (int i=0; i<n-1; i++) {
            for (int j=1; j<n; j++) {
                if (gcd(a[i], a[j]) <= 2) {
                    flag=1;
                    break;
            }
            }
        }
        if (flag==0) cout << "No\n";
        else cout << "Yes\n";

    }
}