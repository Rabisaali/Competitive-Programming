#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int a, x, y;
        scanf("%d %d %d", &a, &x, &y);
        int min1 = max(a, x) - min(a, x);
        int min2 = max(a, y) - min(a, y);
        int distance = max(x, y) - min(x, y);
        if (distance < min1 || distance < min2) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
        t--;
    }
}