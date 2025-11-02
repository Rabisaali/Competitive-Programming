#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        long long int n;
        scanf("%lld", &n);
        vector<long long int>a(n);
        for (int i=0; i<n; i++) {
            scanf("%lld", &a[i]);
        }
        vector<long long int>b(n);
        for (int i=0; i<n; i++) {
            b[i]=a[i];
        }
        sort(a.begin(), a.end());
        int flag=0;
        for (int i=0; i<n; i++) {
            if (a[i]%2 == 0 && b[i]%2 == 0) continue;
            else if (a[i]%2 != 0 && b[i]%2 != 0) continue;
            else flag++;
        }
        if (flag==0) printf("Yes\n");
        else printf("No\n");

        t--;
    }
    return 0;
}