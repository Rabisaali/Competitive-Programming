#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        long long int n;
        scanf("%lld", &n);
        vector <long long int> a(n);
        long long int flag=0;
        for (long long int i=0; i<n; i++) {
            scanf("%lld", &a[i]);
            if (a[i]%2 == 0) flag++;
        }
        
        if (flag == n || flag==0) {
            for (long long int i=0; i<n; i++) {
                printf("%lld ", a[i]);
            }
        }
        else {
            sort(a.begin(), a.end());
            for (long long int i=0; i<n; i++) {
                printf("%lld ", a[i]);
            }
        }
        printf("\n");
        t--;
    }
}