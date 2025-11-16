#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n;
        scanf("%d", &n);
        vector<long long int>a(n);
        for (int i=0; i<n; i++)  {
            scanf("%lld", &a[i]);
        }
        sort(a.begin(), a.end());
        long long int x;
        scanf("%lld", &x);
        if (x<=a[n-1] && x>=a[0]) printf("Yes\n");
        else printf("No\n");
        t--;
    }
}