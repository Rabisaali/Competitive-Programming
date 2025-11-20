#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        long long int n, m, s;
        scanf("%lld %lld %lld", &n, &m, &s);
        if (m<n) {
            printf("%d\n", n-s);
        }
        else {
            while (m>n) {
            m-=n;
            //s
        }
        long long int i;
        for(i=1; i<m; i++) {
            m--;
        }
        printf("%d\n", s+i-1);
        }
        
        t--;
    }
}