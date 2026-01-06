#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        if (n<=10) {
            cout << n << "\n";
            continue;
        } 
        else if (n>10 && n<100) {
            int d = n/10;
            int ans = 9+d;
            cout << ans << "\n";
            continue;
        }
        else if (n>=100 && n<1000) {
            int d = n/100;
            int ans = 18+d;
            cout << ans << "\n";
            continue;
        }
        else if (n>=1000 && n<10000) {
            int d = n/1000;
            int ans = 27+d;
            cout << ans << "\n";
            continue;
        }
        else if (n>=10000 && n<100000) {
            int d = n/10000;
            int ans = 36+d;
            cout << ans << "\n";
            continue;
        }
        else if (n>=100000 && n<1000000) {
            int d = n/100000;
            int ans = 45+d;
            cout << ans << "\n";
            continue;
        }
    }
}