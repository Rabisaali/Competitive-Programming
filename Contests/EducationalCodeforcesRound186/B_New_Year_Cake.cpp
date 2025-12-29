#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        int ans = 0;

        // Case 1: top layer is white
        {
            long long white = 0, dark = 0, size = 1;
            int layers = 0;
            bool whiteTurn = true;

            while (true) {
                if (whiteTurn) {
                    white += size;
                    if (white > a) break;
                } else {
                    dark += size;
                    if (dark > b) break;
                }
                layers++;
                size *= 2;
                whiteTurn = !whiteTurn;
            }
            ans = layers;
        }

        // Case 2: top layer is dark
        {
            long long white = 0, dark = 0, size = 1;
            int layers = 0;
            bool whiteTurn = false;

            while (true) {
                if (whiteTurn) {
                    white += size;
                    if (white > a) break;
                } else {
                    dark += size;
                    if (dark > b) break;
                }
                layers++;
                size *= 2;
                whiteTurn = !whiteTurn;
            }
            ans = max(ans, layers);
        }

        cout << ans << '\n';
    }
    return 0;
}

