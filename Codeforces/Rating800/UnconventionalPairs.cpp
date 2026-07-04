#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        long long int n;
        scanf("%lld", &n);
        vector<long long int>a(n);
        for (long long int i=0; i<n; i++) {
            scanf("%lld", &a[i]);
        }
        sort(a.begin(), a.end());
        long long int maximum = 0;
        for (long long int i=0; i<n; i+=2) {
            maximum=max(maximum, a[i+1]-a[i]);
        }
        printf("%lld\n", maximum);
        t--;
    }
}