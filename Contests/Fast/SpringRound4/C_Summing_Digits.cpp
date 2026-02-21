#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<char>a;
    char c;
    while(cin >> c) {
        a.push_back(c);
    }
    int len = a.size();
    long long sum=0;
    for (int i=0; i<len; i++) {
        sum+=a[i]-'0';
    }
    while (sum>10) {
        
    }
}