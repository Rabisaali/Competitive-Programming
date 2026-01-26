#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL n, m, a;
    cin >> n >> m >> a;
    cout << ((m+a-1)/a)*((n+a-1)/a) << "\n";
}