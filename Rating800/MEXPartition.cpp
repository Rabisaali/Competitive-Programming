#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n;
        scanf("%d", &n);
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        sort(a.begin(), a.end());
        vector<int>A(n);
        for (int i=0; i<n; i++) {
            A[i]=i;
        }
        int j;
        for (int i=0, j=0; i<n; i++) {
            if (i+1==n) break;
            else if (a[i]==A[j]) j++;
            else if (i-1==-1) continue;
            else if (a[i-1]==a[i]) continue;
            else if (a[i]!=A[j]) break;
        }
        printf("%d\n", j);
        t--;
    }
}