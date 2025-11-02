#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        long long int n;
        scanf("%lld", &n);
        vector<long long int>a(n);
        for (int i=0; i<n; i++) {
            scanf("%lld", &a[i]);
        }
        sort(a.begin(), a.end());
        long long int beauty;
        beauty = a[n-1] - a[0] + a[n-2] - a[1];
        printf("%lld\n", beauty);
        t--;
    }
}