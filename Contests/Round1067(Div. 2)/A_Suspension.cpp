#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        int n;
        scanf("%d", &n);
        int y, r;
        scanf("%d %d", &y, &r);
        int count = y/2 + r;
        if (n>=count) printf("%d\n", count);
        else printf("%d\n", n);
        
        t--;
    }
}