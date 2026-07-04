#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector <int> a(n);
    int sum=0;
    for (int i=0;i<n; i++) {
        cin >> a[i];
        sum+=a[i];
    }
    int min;
    min = sum/2;
    

    sort(a.begin(), a.end(), greater<int>());
    int sum1=0;
    int j;
    for (j=0; j<n; j++) {
        sum1+=a[j];
        if (sum1 > min) break;
    }
    cout << j+1;
}