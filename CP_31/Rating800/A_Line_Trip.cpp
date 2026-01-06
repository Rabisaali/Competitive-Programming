#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int maximum=a[0];
        for (int i=1; i<n; i++) {
            maximum = max(maximum, (a[i]-a[i-1])); 
        }
        maximum = max(maximum, 2*(x-a[n-1]));
        cout << " " << maximum <<"\n";

    }
}