#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        long long int R, X;
        int D, n;
        scanf("%lld %lld %d %d", &R, &X, &D, &n);
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        sort(a.begin(), a.end());
        if (R>=X) 
        t--;
    }
}