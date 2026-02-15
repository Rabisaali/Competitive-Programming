#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        vector<int>a(n);
        for (LL i=0; i<n; i++) cin >> a[i];
        LL count=0;
        for (LL i=0; i<n-1; i++) {
            if (a[i+1]==7-a[i] || a[i]==a[i+1]) {
                if (i-1 >= 0) {
                    int constr1=7-a[i-1];
                    int constr2=7-a[i+1];
                    if (abs(constr1-constr2)==1) {
                        if (constr1==1 || constr2==1) a[i]=3;
                        else if (constr1==6 || constr2==6) a[i]=4;
                        else a[i]=min(constr1, constr2)+1;
                    }
                    count++;
                }
                count++; 
            }
        }
        cout << count << "\n";
    }
}