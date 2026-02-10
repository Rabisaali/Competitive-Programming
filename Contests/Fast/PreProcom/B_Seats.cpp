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
        int count=0;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]=='1') count++;
        }
        
        if (n<=2) cout << 1 << "\n";
        else {
            for (int i=1; i<n-1; i+=2) {
                // if (i+1 < n) {
                    if(a[i]=='1' || a[i-1]=='1' || a[i+1]=='1') continue;
                // }
                //else if (i+1 == n && (a[i]=='1' || a[i-1]=='1')) continue;
                else count++;
            }
            cout << count << "\n";
        }
    }
}