#include <bits/stdc++.h>
using namespace std;
#define LL long long int 
int main () {
    LL t;
    cin>>t;
    while (t--) {
        LL n;
        cin >> n;
        if (n%2 == 1) {
            cout << "YES\n";
        }
        else if ((n&(n-1)) == 0) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
}