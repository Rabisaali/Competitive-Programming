#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL n;
    cin >> n;
    string s;
    cin >> s;
    LL counta=0, countd=0;
    for (int i=0; i<n; i++) {
        if (s[i]=='A') counta++;
        else countd++;
    }
    if (counta>countd) cout << "Anton\n";
    else if (countd>counta) cout << "Danik\n";
    else cout << "Friendship\n";
}