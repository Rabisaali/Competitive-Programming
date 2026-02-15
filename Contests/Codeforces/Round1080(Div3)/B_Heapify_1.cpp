#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<bool> vec(n+1,false);
        bool ok = true;

        for (int i = 1; i <= n; i++) {
            if (vec[i]==false) {
                vector<int> index;
                int x = i;
                while (x <= n && vec[x]==false) {
                    vec[x] = true;
                    index.push_back(x);
                    x *= 2;
                }
                vector<int> value;
                for (int j : index) value.push_back(a[j]);

                sort(value.begin(), value.end());

                vector<int> target = index;
                sort(target.begin(), target.end());
                
                if (value != target) ok = false;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}