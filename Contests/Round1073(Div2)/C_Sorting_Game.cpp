#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string s; 
        cin >> s;

        bool sorted = true;
        for (int i = 1; i < n; i++) {
            if (s[i-1] > s[i]) { 
                sorted = false; 
                break; 
            }
        }

        if (sorted) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";

            int i,j;
            for (int k=0; k<n-1; k++) {
                if (s[k]=='1' && s[k+1]=='0') {
                    i=k+1; j=k+2; 
                    break;
                }
            }
            cout << 2 << "\n" << i << " " << j << "\n";
        }
    }
}