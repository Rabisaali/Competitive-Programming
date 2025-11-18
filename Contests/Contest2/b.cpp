#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    scanf("%lld", &t);
    while (t>0) {
        long long int n;
        scanf("%lld", &n);
        vector<long long int>a(n);
        for (long long int i=0; i<n; i++) {
            scanf("%lld", &a[i]);
        }
        //sort(a.begin(), a.end());
        long long int sum=0;
        for(long long int i=0; i<n; i++) {
            if(i+1 == n) {
                break;
            }
            else if(a[i]==a[i+1]) sum+=a[i];
            else {
                a[i+1] = max(a[i], a[i+1]);
                sum+=min(a[i], a[i+1]); 
            }  
        }
        //sum-=min(a[n-2],a[n-1]);
        printf("%lld\n", sum);
        t--;
    }
}