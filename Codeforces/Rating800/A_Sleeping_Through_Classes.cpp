#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<char>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int count = 0;
        int index = 0;
        int flag=0;
        for (int i=0; i<n; i++) {
            if (a[i]=='1') {
                index = i;
                count+=1;
                flag=1;
            }
            else if (i<=index+k && a[i]=='0' && flag==1) {
                count+=1;
            }
        }
        int ans = n-count;
        cout << ans << "\n";
    }
}