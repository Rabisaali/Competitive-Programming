#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        cout << n + ((n/2)*2) + ((n/3)*2) << "\n";
    }
}