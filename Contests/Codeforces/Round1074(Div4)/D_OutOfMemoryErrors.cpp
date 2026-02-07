#include <bits/stdc++.h>
using namespace std;
#define LL long long

struct Operation {
    int b;
    LL c;
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        LL h;
        cin >> n >> m >> h;
        vector<LL> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<Operation> ops(m);
        for (int i = 0; i < m; i++) {
            cin >> ops[i].b >> ops[i].c;
            ops[i].b--; 
        }

        vector<LL> temp = a;
        int lastCrash = -1;
        for (int i = 0; i < m; i++) {
            temp[ops[i].b] += ops[i].c;
            if (temp[ops[i].b] > h) {
                lastCrash = i;
                temp = a;
            }
        }

        temp = a;
        for (int i = lastCrash + 1; i < m; i++) {
            temp[ops[i].b] += ops[i].c;
            if (temp[ops[i].b] > h) {
                temp = a;
                lastCrash = i;
            }
        }

        for (int i = 0; i < n; i++) cout << temp[i] << " ";
        cout << "\n";
    }
}