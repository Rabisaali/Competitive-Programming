#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<LL>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if (a[0]==a[n-1]) cout << "0\n";
        else {
            int flag=0;
            LL count=0;
            for (int i=1; i<n; i++) {
                if (a[i]%a[i-1] != 0) {
                    flag=1;
                    break;
                }
                else if (a[i]!=a[i-1]) count++;
            }
            if (flag==1) cout << n << "\n";
            else {
                cout << count << "\n";
            }
        }
    }
}