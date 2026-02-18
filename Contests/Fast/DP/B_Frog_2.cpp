#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main () {
    int n;
    int k;
    cin >> n >> k;
    vector<int>a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    
    vector<int>v(n);
    // v[1]=abs(a[0]-a[1]);
    // LL temp=2;
    // for (LL i=2; i<k && i<n; i++) {
    //     v[i]=abs(a[i]-a[i-1]);
    //     for(LL j=2; j<i; j++) {
    //         v[i]=min(v[i], abs(a[j]-a[j+1]));
    //     }
    //     temp=i;
    //     //v[i]=abs(a[i]-a[i-1]);
    // }
    v[0]=0;
    for (int i=1; i<n; i++) {
        v[i]=100000;
        //v[i]=abs(a[i]-a[i-1]);
        for(int j=i; j >= max(1, i-k); j--) {
            v[i]=min(v[i], v[j]+abs(a[i]-a[j]));
            //if (mini > (v[j]+abs(a[j]-a[j+1]))) mini = v[j]+abs(a[j]-a[j+1]);
        }
        //v[i]=mini; 
    }
    cout << v[n-2] << "\n";
}