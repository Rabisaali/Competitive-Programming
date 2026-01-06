#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        int sum=0;
        for (int i=0; i<n-1; i++) {
            cin >> a[i];
            sum+=a[i];
        }
        sum *=-1;
        cout << " " << sum << "\n"; 
    }
}