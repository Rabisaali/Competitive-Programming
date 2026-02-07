#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL n, k;
    cin >> n >> k;
    int count=0;
    for (LL i=1; i<=n; i++) {
        LL temp=i;
        LL sum=0;
        while (temp != 0) {
            sum+=temp%10;
            temp/=10;
        }
        if (sum==k) count++;
    }
    cout << count << "\n";
}