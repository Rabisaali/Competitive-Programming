#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    LL n;
    cin >> n;
    int max = n;
	if (n/10 > max) max = n/10;
	if (n%10 + (n/100)*10 > max) max = n%10 + (n/100)*10;
	cout << max;
}