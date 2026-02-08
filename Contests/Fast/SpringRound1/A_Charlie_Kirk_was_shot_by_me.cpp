#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    if (n==1 || n==2) cout << "Yes\n";
    else {
        int ans = a[0]+a[n-1];
        int flag=0;
        for (int i=1; i<n/2; i++) {
            if (ans!=a[i]+a[n-1-i]) {
                flag=1;
                break;
            }
        }
        if (flag==1) cout << "No\n";
        else if (n%2 == 1) {
            int var = a[(n+1)/2]+a[(n+1)/2];
            if (var != ans) cout << "Yes\n";
            else cout << "No\n";
        }
        else cout << "Yes\n";
    }
}