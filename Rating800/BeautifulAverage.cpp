#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        int n;
        scanf("%d", &n);
        vector <int> a(n);
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        sort (a.begin(), a.end(), greater<int>());
        printf("%d\n", a[0]);
        t--;
    }
}