#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b<=d && c<=(a-b+d)) {
            cout << d-b+a+d-b-c << "\n";
            //continue;
        }
        else {
            cout << "-1\n";
        }
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// #define LL long long int
// int main () {
//     LL t;
//     cin >> t;
//     while (t--) {
//         LL a, b, c, d;
//         cin >> a >> b >> c >> d;
//         LL ans=0;
//         LL temp;
//         if (d<b) {
//             cout << "-1\n";
//             continue;
//         }
//         else if (a==c && b==d) {
//             ans=0;
//             cout << ans << "\n";
//             continue;
//         }
//         else if (b==d && a>c) {
//             ans=a-c;
//             cout << ans << "\n";
//             continue;
//         }
//         else {
//             temp=abs(d)-abs(b);
//             while(d!=b && temp--) {
//                 a++;
//                 b++;
//                 ans++;
//             }
//             while (a>c) {
//                 ans++;
//                 a--;
//             }
//             if (d<b) {
//                 cout << "-1\n";
//                 continue;
//             }
//         }
//         if (ans==0) {
//             cout << "-1\n";
//         }

//         else cout << ans << "\n";

//     }
// }