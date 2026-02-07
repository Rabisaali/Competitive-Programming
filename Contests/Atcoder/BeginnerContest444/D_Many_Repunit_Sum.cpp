#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL n;
    cin >> n;
    vector<int>a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    LL sum=0;
    for (int i=0; i<n; i++) {
        string s="";
        while (a[i]>=1) {
            s+="1";
            a[i]--;
        }
        // LL ans=0;
        // stringstream sstr(s);
        // sstr >> ans;

        sum+=stoll(s, nullptr, 10);
    }
    cout << sum << "\n";


}