#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        if (n%2 == 1 || n<4) {
            cout << "-1\n";
            continue;
        }
        if (n==6 || n==4) {
            cout << "1 1" << "\n";
            continue;
        }
        LL temp = n;
        // LL i  = 0;
        // while ((temp%6 != 0) && (i%4 != 0)) {
        //     i++;
        //     temp--;
        // }
        // cout << (temp/6)+(i/4) << " ";

        // temp = n;
        // LL j = 0;
        // while ((temp%4 != 0) && (j%6 != 0)) {
        //     j++;
        //     temp--;
        // }
        // cout << (temp/4)+(j/6) << "\n";
        cout << (n+5)/6 << " " << n/4 << "\n";
    }
}