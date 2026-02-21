#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<char>a(30);
    a={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    char c;
    cin >> c;
    string s;
    cin >> s;
    int len = s.length();
    if (c=='R') {
        for (int i=0; i<len; i++) {
            int index = find(a.begin(), a.end(), s[i])-a.begin();
            s[i]=a[index-1];
        }
    }
    else  {
        for (int i=0; i<len; i++) {
            int index = find(a.begin(), a.end(), s[i])-a.begin();
            s[i]=a[index+1];
        }
    }
    for (int i=0; i<len; i++) cout << s[i];
}