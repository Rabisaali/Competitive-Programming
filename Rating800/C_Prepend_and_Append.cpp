#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int flag=0;
        for (int j=0; j<n; j++) {
            if (arr[j]==arr[n-1-j]) {
                flag=n-1-j;
                break;
            }
        }
        if (n==1) cout << "1\n";
        else if (flag==0) {
            cout << "0\n";
        }
        else {
            cout << 2*(flag)-n+2 << "\n";
        }
    }
}