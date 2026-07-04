#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL g, p;
    cin >> g >> p;
    vector<LL>a(g+1);
    vector<LL>b(g+1, 1);
    b[0]=0;
    for (LL i=1; i<=g; i++) {
        cin >> a[i];
    }
    
    LL count=0;
    for (LL i=1; i<=g; i++) {
        int flag=0;
        for (LL j=a[i]; j>0; j--) {
            if (b[j]==1) {
                b[j]=0;
                flag=1;
                count++;
                break;
            }
        }
        if (flag==0) break;
    }
    cout << count << "\n";

}