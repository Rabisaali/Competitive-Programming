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
        int count=0;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]==2) count++;
        }
        if (count%2 != 0) {
            cout << "-1\n";
            continue;
        }
        else {
            int ans;
            int index = count/2;
            for (int i=0; i<n; i++) {
                if (a[i]==2) index--;
                if (index==0) {
                    ans=i;
                    break;
                }
            }
            cout << ans+1 << "\n";
        }

    }
}