#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char>a(n);
        vector<char>b(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b.begin(), b.end());
        int flag=0;
        char c = 'B';
        for (int i=0; i<n; i++) {
            auto j = find(b.begin(), b.end(), a[i]);
            if (c == 'B') {
                b[distance(b.begin(), j)]='R';
                c='R';
            }
            else {
                b[distance(b.begin(), j)]='B';
                c='B';
            }
        }
        for (int i=1; i<n; i++) {
                if (b[i-1]==b[i]) {
                    cout << "NO\n";
                    flag=1;
                    break;
                }
        }
        if (flag==0) cout << "YES\n";
    }
}