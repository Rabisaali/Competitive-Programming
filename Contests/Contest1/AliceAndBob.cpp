#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        long long int n, a;
        scanf("%lld %lld", &n, &a);
        vector<long long int>v(n);
        for (long long int i=0; i<n; i++) {
            scanf("%lld", &v[i]);
        }
        sort(v.begin(), v.end());
        long long int num=0;
        for (num=0; num<n; num++) {
            if(v[num]==a) break;
        }
        long long int half = (v[num]+v[num+1])/2;
        printf("%lld\n", half+1);
        t--;
    }
}