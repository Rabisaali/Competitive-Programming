#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        if (k==1 && x==1) {
            cout << "NO\n";
            continue;
        }
        else if (k==2 && x==1 && (n%2)!=0) {
            cout << "NO\n";
            continue;
        }
        // vector<int>a; 
        // a.push_back(k);
        // if (n-k != 0) {
        //     if (n-k != x) {
        //     a.push_back(n-k);
        // }
        // else {
        //     if (x!=1) {
        //         a.push_back(n-k-1);
        //         a.push_back(1);
        //     }
        //     else {
        //         a.push_back(n-k-2);
        //         a.push_back(2);
        //     }
        // }
        // }
        
        cout << "YES\n";
        if (x!=1) {
            cout << n <<"\n";
            for (int i=0; i<n; i++) {
                cout << "1 ";
            }
            cout << "\n";
        }
        else {
            vector<int>a;
            cout << n/2 << "\n";
            if (n%2 == 1) {
                a.push_back(3);
                for (int i=0; i<n/2 - 1; ++i) {
                    a.push_back(2);
                }
            } else {
                for (int i=0; i<n/2; ++i) {
                    a.push_back(2);
                }
            }
            
            //a.push_back(k);
            // if (n-k != 0) {
            //     if (n-k != x) {
            //     a.push_back(n-k);
            // }
            // else {
            //     if (x!=1) {
            //         a.push_back(n-k-1);
            //         a.push_back(1);
            //     }
            //     else {
            //         a.push_back(n-k-2);
            //         a.push_back(2);
            //     }
            // }
                //cout << a.size() << "\n";
                for (int i=0; i<a.size(); i++) {
                    cout << a[i] << " ";
                }
                cout << "\n";
        }
    }
}