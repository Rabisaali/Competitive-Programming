#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        char s[101];
        scanf("%s", s);
        int len = strlen(s);
        int flag=0;
        for (int i=0; i<len-1; i++) {
            if (s[i]==s[i+1]) {
                flag=1;
                break;
            }
        }
        if (flag==0) cout << " " << len << "\n";
        else cout << "1\n";
    }
}