#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        LL num = 1;
        while (n%num == 0) num++;
        cout << num-1 << "\n";
    }
}