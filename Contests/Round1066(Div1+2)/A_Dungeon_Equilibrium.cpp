#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n;
        scanf("%d", &n);
        vector <int> a(n);
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        sort (a.begin(), a.end());
        int Delete=0;
        for (int i=0; i<n;) {
            int z = a[i];
            int f=0;
            while (i<n && a[i]==z) {
                i++;
                f++;
            }
            if (f>z) {
                Delete+=(f - z);
            }
            else if (f<z) {
                Delete+=f;
            }
        }
        printf("%d\n", Delete);
        t--;
    }
}