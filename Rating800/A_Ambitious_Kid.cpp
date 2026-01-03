#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL n;
    cin >> n;
    vector <LL> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (a[i]<0) a[i]*=-1;
    }
    sort(a.begin(), a.end());
    cout << " " << a[0];
}