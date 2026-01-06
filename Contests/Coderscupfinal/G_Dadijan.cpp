#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t>0) {
        long long int n, m, s;
        scanf("%lld %lld %lld", &n, &m, &s);
        while (m>n) m-=n;
        long long int i=s+m-1;
        cout << i << "\n";
        
        t--;
    }
}