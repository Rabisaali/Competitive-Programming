#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        char s[n];
        for (int i=0; i<n; i++) {
            cin >> s[i];
        }
        int count = 0;
        int maximum = 0;
        for (int i=0; i<n-1; i++) {
            if (s[i]==s[i+1]) count++;
            else count = 0;
            if (count > maximum) maximum = count;
        }
        cout << maximum+2 << "\n";
    }
}