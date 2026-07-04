#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL a, b;
    cin >> a >> b;
    LL ans = a-b;
    vector<int>arr;
    while (ans>0) {
        int digit = ans%10;
        arr.push_back(digit);
        ans/=10;
    } 
    reverse(arr.begin(), arr.end());
    int len = arr.size();
    if (arr[0]==9) arr[0]--;
    else arr[0]++;
    for (int i=0; i<len; i++) {
        cout << arr[i];
    }
}