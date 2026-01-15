#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        LL n, q;
        cin >> n >> q;
        //LL count=0;
        LL sum=0;
        vector <LL> a(n);
        vector <LL> s(n); 
        for (LL i=0; i<n; i++) {
            cin >> a[i];
            sum+=a[i];
            s[i]=sum;
            //if (a[i]%2 == 1) count+=1;
        }
        while (q--) {
            //LL temp = count;
            LL l, r, k;
            cin >> l >> r >> k;
            LL total = s[n-1];  
            LL rangeSum = (l == 1 ? s[r-1] : s[r-1] - s[l-2]);  
            LL ans = total - rangeSum + (r-l+1)*k;
            //LL ans=s[n-1]-(s[r-1]-s[l-1])+(r-l+1)*k;
            // for (int i=0; i<l-1; i++) {
            //     sum+=a[i];
            // }
            // for (int i=r; i<n; i++) {
            //     sum+=a[i];
            // }
            //sum+=(r-l+1)*k;
            if (ans%2 == 1) cout << "YES\n";
            else cout << "NO\n";
            // if (k%2==1) {
            //     for (LL i=l-1; i<r; i++) {
            //         if (a[i]%2 == 1) continue;
            //         else temp+=1;
            //     }
            // }
            // else {
            //     for (LL i=l-1; i<r; i++) {
                    
            //         if (a[i]%2 == 1) {
            //             temp-=1;
            //         }
            //         else continue;
            //     }
            // }
            // //cout << temp;
            // if (temp%2 == 1) cout << "YES\n";
            // else cout << "NO\n";
        }
    }
}