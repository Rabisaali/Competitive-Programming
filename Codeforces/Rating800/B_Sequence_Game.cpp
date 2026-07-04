#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        vector <LL> b(n);
        for (LL i=0; i<n; i++) {
            cin >> b[i];
        }
        vector <LL>a;
        a.push_back(b[0]);
        for (LL i=1; i<n; i++) {
            if (b[i-1]>b[i]) {
                a.push_back(1);
                //a.push_back(a[i]);
            }
            a.push_back(b[i]);
        }
        LL m = a.size();
        cout << " " << m << "\n";
        for (LL i=0; i<m; i++) {
            cout << " " << a[i];
        }
        cout << "\n";
    }
}