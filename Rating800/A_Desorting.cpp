#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int i=0; 
        while (a[n-2]<=a[n-1]) {
            a[n-2]++;
            a[n-1]--;
            i++;
        }
        cout << i << "\n";
    }
}