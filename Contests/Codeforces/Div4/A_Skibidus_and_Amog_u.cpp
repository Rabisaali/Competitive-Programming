#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        char s[11];
        scanf("%s", s);
        int len = strlen(s);
        s[len-2] = 'i';
        s[len-1] = '\0';
        cout << " " << s << "\n";
    }
}