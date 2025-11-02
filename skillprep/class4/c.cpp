#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        long long int n;
        scanf("%lld", &n);
        vector<long long>arr(n);
        for (long long int i=0; i<n; i++) {
            scanf("%lld", &arr[i]);
        }
        sort(arr.begin(), arr.end(), greater<long long>());
        long long int sum=0;
        long long int max1 = arr[0]*arr[1];
        long long int max2 = arr[n-1]*arr[n-2];
        if (max1>max2) printf("%lld\n", max1);
        else printf("%lld\n", max2);
        t--;
    }
    return 0;
}