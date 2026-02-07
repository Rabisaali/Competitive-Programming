#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);

        // Fill first n numbers with distinct positive integers
        for(int i = 0; i < n; i++) {
            a[i] = i + 1; // any distinct positive integers <= 1e9
        }

        // Compute XOR from l-1 to r-2
        int xor_sum = 0;
        for(int i = l-1; i < r-1; i++) {
            xor_sum ^= a[i];
        }

        // Set a[r-1] to make XOR of subarray [l..r] zero
        a[r-1] = xor_sum;

        // Output the array
        for(int i = 0; i < n; i++) {
            if(i) cout << ' ';
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}
