#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL t;
    cin >> t;
    while (t--) {
        LL n, m;
        cin >> n >> m;
        LL x, y;
        LL points = 0;
        int remx=0, remy=0;
        while (n--) {
            cin >> x >> y;
            points += x-remx;
            if (((x-remx+2)%2)!=((y-remy+2)%2)) points--;
            remx = x;
            remy = y; 
        }
        if (remx!=m) points += m-remx;
        cout <<" "<< points<<"\n";
    }
}