#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        int x,k;
        cin >> x >> k;
        if (x%k == 0) {
            cout << "2\n";
            cout << x-1 << " " << 1 << "\n";
        }
        else {
            cout << "1\n";
            cout << x << "\n";
        }
    }
}