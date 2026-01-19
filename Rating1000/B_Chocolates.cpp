#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL n;
    cin >> n;
    vector<LL>a(n);
    for (LL i=0; i<n; i++) {
        cin >> a[i];
    }
    LL sum = 0;
 
    sum+=a[n-1];
    LL mx = a[n-1]-1;
 
    for(int i=n-2; i>=0; i--){
        sum+=min(mx,a[i]);
        mx = min(mx,a[i])-1;
        if(mx<=0) break;
    }
 
    cout<<sum<<"\n";
}