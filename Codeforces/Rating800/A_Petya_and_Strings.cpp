#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    char s[101], t[101];
    cin >> s >> t;
    int ans = strcasecmp(s, t);
    if (ans==0) cout << "0\n";
    else if (ans>0) cout << "1\n";
    else cout << "-1\n";
}