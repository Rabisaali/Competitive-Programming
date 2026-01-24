#include <bits/stdc++.h>
using namespace std;

#define LL long long int
LL Pow(LL a, LL n);
int main () {
    LL n, m;
    cin >> n;
    cin >> m;
    if (m<n) {
        cout << m << "\n";
        return 0;
    }
    if (n>30) {
        cout << m << "\n";
        return 0;
    }
    LL ans = m%Pow(2, n); 
    cout << ans << "\n";
}
LL Pow(LL a, LL n) {
    if (n==0) return 1;
    else if (n==1) return a;
    LL x = Pow(a, n/2);
    LL ans;
    if (n%2==1) {
        ans = x*x*a;
    }
    else ans = x*x;
    return ans;
}