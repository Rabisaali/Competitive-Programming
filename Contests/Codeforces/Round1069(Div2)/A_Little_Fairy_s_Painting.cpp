#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t>0) {
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long int num=0;
        for (int i=0; i<n; i++) {
            if(i+1==n) break;
            if (a[i]!=a[i+1]) num++;
        }
        num++;
        while (1) {
            if(find(a.begin(), a.end(), num) == a.end()) {
                num++;
            }
            else {
                break;
            }
        }
        cout << num << endl;
        t--;
    }
    
}