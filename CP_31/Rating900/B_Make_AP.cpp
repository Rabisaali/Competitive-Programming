#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL a, b, c;
        cin >> a >> b >> c;
        int clue = a-c;
        if ((clue == -1 || clue==1) && (b<a || b<c)) cout << "NO\n";
        else cout << "YES\n";
    }
}