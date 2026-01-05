#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int Xor = 0;
        vector <int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
            Xor ^= a[i];
        }
        //int j=0;
        if(Xor == 0) cout << "0\n";
        else if (n%2 == 1) cout << Xor << "\n";
        else cout << "-1\n";
    }
}