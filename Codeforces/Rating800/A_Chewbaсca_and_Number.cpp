#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    string x;
    cin >> x;
    for (int i=0; i<x.size(); i++) {
        char ch = x[i];
        int y = x[i]-'0';
        if (i==0 && x[i]=='9') cout<<"9";
        else cout<<min(y, 9-y);
    }
    
}