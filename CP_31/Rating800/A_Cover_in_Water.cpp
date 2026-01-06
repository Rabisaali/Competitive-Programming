#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int count=0;
        int num=0;
        for (int i=0; i<n; i++) {
            if (i>=2 && arr[i]=='.' && arr[i]==arr[i-1] && arr[i]==arr[i-2]) {
                count++;
                break;
            }
            else if (arr[i]=='.') num++;
        }
        if (count==1) cout << "2\n";
        else cout << " " <<num<<"\n";
    }
}