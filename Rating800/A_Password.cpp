#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int ans = 10-n;
        switch(ans) {
            case 2:
                cout << "6\n";
                break;
            case 3:
                cout << "18\n";
                break;
            case 4:
                cout << "36\n";
                break;
            case 5:
                cout << "60\n";
                break;
            case 6:
                cout << "90\n";
                break;
            case 7:
                cout << "126\n";
                break;
            case 8:
                cout << "168\n";
                break;
            case 9:
                cout << "216\n";
                break;
        }
    }
}