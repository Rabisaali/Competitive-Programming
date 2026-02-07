#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        LL n, m, h;
        cin >> n >> m >> h;
        vector<LL>a(n);
        vector<LL>temp(n);
        for (LL i=0; i<n; i++) {
            cin >> a[i];
            temp[i]=a[i];
        }
        while (m--) {
            LL b, c;
            cin >> b >> c;
            temp[b-1]+=c;
            if (temp[b-1]>h) {
                for (int i=0; i<n; i++) {
                    temp[i]=a[i];
                }
            }
        }
        for(LL i=0; i<n; i++) {
            cout << temp[i] << " ";
        }
        cout << "\n";
    }
}