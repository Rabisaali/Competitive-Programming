#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int n;
    cin >> n;
    vector<char>a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int count=0;
    for (int i=0; i<n-1; i++) {
        if (int(a[i])==int(a[i+1])) count++;
    }
    cout<<count<<"\n";
}