#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL n;
    cin >> n;
    vector<int>a(n);
    int count2=0, count1=0;
    for (LL i=0; i<n; i++) {
        cin >> a[i];
        if (a[i]==2) count2++;
        else count1++;
    }
    vector<int>b;
    if (count2 != 0) {
        b.push_back(2);
        count2--;
    }
    if (count1 != 0) {
        b.push_back(1);
        count1--;
    }
    while (count2>0) {
        b.push_back(2);
        count2--;
    } 
    while (count1>0) {
        b.push_back(1);
        count1--;
    }
    for (int i=0; i<n; i++) {
        cout << b[i] << " ";
    }
    cout << "\n";

}