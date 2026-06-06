#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    int t;
    cin >> t;
    string ans = "Proggy";
    sort(ans.begin(), ans.end());
    string s;
    while (t--) {
        cin >> s;
        string t = s;
        sort(t.begin(), t.end());

        if (t == ans && s.size() == 6)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}