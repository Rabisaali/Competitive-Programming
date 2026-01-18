#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        vector<vector<int>>x;
        
        for (int i=0; i<n.size(); i++) {
            if (n[i]=='0') continue;
            vector<int>a;
            a.push_back(n[i]-'0');
            if (i!=n.size()-1) {
                for (int j=i+1; j<n.size(); j++) {
                    a.push_back(0);
                } 
            } 
            x.push_back(a);
        }
        cout << x.size() << "\n";
        int a = x.size();
        for (int i=a-1; i>=0; i--) {
            for (int j=0; j<x[i].size(); j++) {
                cout << x[i][j];
            }
            cout << " ";
        }
        cout << "\n";
    }
}