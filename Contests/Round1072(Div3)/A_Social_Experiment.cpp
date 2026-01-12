#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        if (n==2 || n==3) cout << n <<"\n";
        else if (n%2 == 0) cout << "0\n";
        else cout << "1\n";
    }
}