#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int n, k;
    cin >> n >> k;
    long long int half;
    if (n%2==0) {
        half = n/2;
    }
    else {
        half = (n/2) +1;
    }
    long long int ans;
    if (k<=half) ans = (2*k)-1;
    else {
        long long int a;
        a = k-half;
        ans = 2*a;
    }
    cout << ans;
}