#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        vector<LL>a(n);
        LL count=0;
        //LL first=0;
        for (LL i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]==0) count++;
        }
        if (count==n) cout << "0\n";
        else {
            LL last=n-1;
            LL first=0;
            while(a[last]==0) {
                last--;
            }
            while (a[first]==0) {
                first++;
            }
            if (last-first+count+1==n) cout << "1\n";
            else cout << "2\n";
        }
        
        

    }
}