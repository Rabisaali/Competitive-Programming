#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;
        if (s<=k) {
            m=m%(k);
            if(m>=0 && m<s) cout << s-m << "\n";
            else cout << "0\n";
           
        }
        else {
            m=m%(2*k);
            if (m>=0 && m<=k-1) cout << s-m << "\n";
            else if (m>=k && m<=2*k-1) cout << k-(m-k) << "\n";
        }


    }
    return 0;
}