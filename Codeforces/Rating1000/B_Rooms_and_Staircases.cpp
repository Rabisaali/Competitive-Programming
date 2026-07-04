#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char>a(n);
        int num=0;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]=='0') num+=1;
            //else num1+=1;
        }

        if (a[0]=='1' || a[n-1]=='1') {
            cout << 2*n << "\n";
        }
        else if (num==n) cout << num << "\n";
        else {
            int count1=0, count2=0;
            for (int i=0; i<n; i++) {
                if (a[i]=='1') {
                    count1 = i;
                    //break;
                }
            }
            for (int i=n-1; i>=0; i--) {
                if (a[i]=='1') {
                    count2=i;
                    //break;
                }
            }
            int ans = max(count1+1, n-count2);
            cout << (ans)*2 << "\n";
        }
    }
} 