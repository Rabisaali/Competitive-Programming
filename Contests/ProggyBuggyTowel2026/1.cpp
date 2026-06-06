#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int m;
    cin >> m;

    int fact = 1;

    for (int N = 1; N <= 12; N++) {
        fact *= N;
        if (fact == m) {
            cout << N;
            return 0;
        }
    }

    cout << 0;
    return 0;
}