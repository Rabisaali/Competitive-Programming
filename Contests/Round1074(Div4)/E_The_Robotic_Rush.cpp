#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n, m, k;
        cin >> n >> m >> k;
        vector<LL>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        vector<LL>b(m);
        for (int i=0; i<m; i++) {
            cin >> b[i];
        }
        string s;
        cin >> s;
        LL count = n;
        LL len = s.length();
        for (int i=0; i<len; i++) {
            if (count == 0) {
                cout << "0 ";
                continue;
            }
            if (s[i]=='L') {
                for (int i=0; i<n; i++) {
                    a[i]--;

                    if (find(b.begin(), b.end(), a[i]) != b.end()) count--;
                }
            }
            else {
                for (int i=0; i<n; i++) {
                    a[i]++;
                    if (find(b.begin(), b.end(), a[i]) != b.end()) count--;
                }
            }
            cout << count << " ";
            
        }
        cout << "\n";
    }
}