#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int x, y;
        scanf("%d %d", &x, &y);
        int ans = x/2;
        printf("%d\n", ans);
        t--;
    }
}