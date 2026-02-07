#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        long long int n, x, y;
        scanf("%lld %lld %lld", &n, &x, &y);
        int arr[n+1];
        int count4=0;
        for (long long int i=0; i<n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i]==4) {
                count4++;
            }
        }
        if (x<=n && count4==0) printf("Yes\n");
        else printf("No\n");
        t--;
    }
}