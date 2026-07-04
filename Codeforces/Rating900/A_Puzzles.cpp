#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    vector <int> a(m);
    for (int i=0; i<m; i++) {
        cin >> a[i];
    }
    sort (a.begin(), a.end());
    int diff1=1000;
    int i=0;
    while (n-1 < m) {
        int diff = a[n-1]-a[i];
        diff1 = min(diff1, diff);
        n++;
        i++;
    }
    cout << diff1;
}