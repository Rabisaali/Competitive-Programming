#include <stdio.h>
int main () {
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);
    int a[m], b[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<m; i++) {
        scanf("%d", &b[i]);
    }
    int count=0;
    for (int i=0; i<n; i++) {
        if (a[i] >= x) {
            count++;
        }
    }
    for (int i=0; i<m; i++) {
        if (b[i] <= x) {
            count++;
        }
    }
    printf("%d", count);
}