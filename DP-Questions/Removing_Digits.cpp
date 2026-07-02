#include<bits/stdc++.h>
#define int long long
#define fastnuces ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

signed main () {
    fastnuces;
    string a;
    cin >> a;
    int x = stoll(a);
    //int len = a.length();
    int steps=0;
    
    while(x>=10) {
        steps++;
        int maxv = *max_element(a.begin(), a.end()) - '0';
        x-=maxv;
        a=to_string(x);
    }
    cout << steps+1 << "\n";
    return 0;
}