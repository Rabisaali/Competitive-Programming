#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;

        // Count frequencies
        vector<int> fs(26, 0), ft(26, 0);
        for (char c : s) fs[c - 'a']++;
        for (char c : t) ft[c - 'a']++;

        // Feasibility check
        bool ok = true;
        for (int i = 0; i < 26; i++) {
            if (fs[i] > ft[i]) { ok = false; break; }
        }
        if (!ok) { cout << "Impossible\n"; continue; }

        // Build leftover string (t minus s), sorted
        string leftover;
        for (int i = 0; i < 26; i++) {
            int cnt = ft[i] - fs[i];
            for (int k = 0; k < cnt; k++) leftover.push_back(char('a' + i));
        }
        sort(leftover.begin(), leftover.end());

        // Count blocks relative to ch = s[0]
        char ch = s[0];
        string less, equal, greater;
        for (char c : leftover) {
            if (c < ch) less.push_back(c);
            else if (c == ch) equal.push_back(c);
            else greater.push_back(c);
        }

        // Decide tie-break for equal block
        bool placeSBeforeEqual = true;
        int i = 0;
        while (i < (int)s.size() && s[i] == ch) i++;
        if (i < (int)s.size()) {
            // First differing character decides
            if (s[i] > ch) placeSBeforeEqual = false;
            else placeSBeforeEqual = true; // s[i] < ch
        } // else s is all ch -> place before

        // Build answer
        string ans;
        ans += less;
        if (placeSBeforeEqual) {
            ans += s;
            ans += equal;
        } else {
            ans += equal;
            ans += s;
        }
        ans += greater;

        cout << ans << "\n";
    }
    return 0;
}