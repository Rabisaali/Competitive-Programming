#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL n;
    cin >> n;
    int ans;
    if (n==2 || n-2==1 || n-2==0) {
        cout << "-1\n";
        return 0;
    }
    for (int i=2; i*i <= n-2; i++) {
        if ((n-2)%i == 0) {
            cout << "-1\n";
            return 0;
        }
    }
    cout << "2 " << n-2 << "\n";
}