#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define LL long long int
int main () {
        vector<char>a(3);
        for (int i=0; i<3; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i=0; i<3; i++) {
        cout << a[i]  << " ";
    }
    cout << "\n";
    
    
}