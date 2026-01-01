#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n%3 != 0) cout << "First\n";
        else cout << "Second\n";
    }
}