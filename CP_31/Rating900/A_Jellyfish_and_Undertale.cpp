#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        LL a, b, n;
        cin >> a >> b >> n;
        vector<LL>c(n);
        LL count = b;
        LL sum;
        for (LL i=0; i<n; i++) {
            cin >> c[i];
            
            //sum=count+c[i];
            if (c[i]<a) count+=c[i];
            else count+=a-1;
            //count-=1;
            
            //sum-=1;
        }
        //count-=1;
        cout << count << "\n";
    }
}