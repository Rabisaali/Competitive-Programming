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
        int countp=0, countn=0;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]==1) countp++;
            else countn++;
        }
        int ans=0;
        if (countp==n) {
            cout << "0\n";
            continue; 
        }
        else if (countn==countp && (countn%2)==0) {
            cout << "0\n";
            continue;
        }
        else {
            while ((countn % 2 != 0) || (countp<countn)) {
                countn--;
                countp++;
                ans++;
            }
            //int ans = (countp)-(countn/2) ;
            cout << ans << "\n";
        }
    }
}