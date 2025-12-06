#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int j=0;
    int temp=0;
    for (long long int i=1; i<n; i++) {
        if (arr[i-1]<=arr[i]) {
            j++;
            temp=max(temp,j);
        }
        else j=0;
    }
    cout << temp+1;
}