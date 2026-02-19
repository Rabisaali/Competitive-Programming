#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main () {
    int n;
    int k;
    cin >> n >> k;
    vector<int>a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    
    vector<int>v(n, INT_MAX);
    v[0]=0;
    for (int i=0; i<n; i++) {
        //v[i]=100000;
        //v[i]=abs(a[i]-a[i-1]);
        for(LL j=i+1; j<=i+k; j++) {
            if (j<n) v[j]=min(v[j], v[i]+abs(a[i]-a[j]));
            //if (mini > (v[j]+abs(a[j]-a[j+1]))) mini = v[j]+abs(a[j]-a[j+1]);
        }
        //v[i]=mini; 
    }
    cout << v[n-1] << "\n";
}