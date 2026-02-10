#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n;
        cin >> n;
        vector<LL>p(n);
        vector<LL>q(n);
        for (LL i=0; i<n; i++) {
            cin >> p[i];
            q[i]=p[i];
        }
        sort(q.begin(), q.end(), greater<LL>());
        if (p==q) {
            for (LL i=0; i<n; i++) {
                cout << p[i] << " ";
            }
        } 
        else {
            //cout << q[0] << " ";
            for (LL i=0; i<n; i++) {
                if (p[i]==q[i]) continue;
                else {
                    LL temp=p[i];
                    LL index = find (p.begin(), p.end(), q[i]) - p.begin();
                    p[i]=q[i];
                    p[index]=temp;
                    break;
                }
            }
            for (LL i=0; i<n; i++) {
                cout << p[i] << " ";
            }
        }
        cout << "\n";
    }
}