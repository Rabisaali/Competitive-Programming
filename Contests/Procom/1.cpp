#include <iostream>
#include <string>
#define LL long long
using namespace std;
int main () {
    string s;
    cin >> s;
    string g="";
    int len = s.length();
    for (int i=1; i<len; i++) {
        if (s[i]==s[i-1]) {

            len-=2;
           for(int j=i-1; j<len; j++){
                s[j]=s[j+2];
           }
        }
    }
   // int j=0;
    /*for (int i=1; i<len; i++){
        if (s[i]=='0') {
           //j++;
            continue;
        }
        else g.push_back(s[i]);
    }*/
    if (g=="") cout << "Empty String\n";
    else cout << g << "\n";
}