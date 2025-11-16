#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int n;
    scanf("%lld", &n);
    vector<string>s(n);
    for (int i=0; i<n; i++) {
        cin>>s[i];
    }
    long long int i=0;
    long long int face = 0;
    while (n-->0) {
        if (s[i] == "Tetrahedron") face+=4;
        else if (s[i] == "Cube") face+=6;
        else if (s[i] == "Octahedron") face+=8;
        else if (s[i] == "Dodecahedron") face+=12;
        else if (s[i] == "Icosahedron") face+=20;
        i++;
    }
    printf("%lld\n", face);
}