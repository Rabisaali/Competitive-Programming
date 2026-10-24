#include<bits/stdc++.h>
using namespace std;
int maximumToys(vector<int>& prices, int k) {
    int n=prices.size();
    sort(prices.begin(), prices.end());
    int count=0;
    int i=0;
    while(i<n && k>0) {
        if(k-prices[i]>=0) {
            k-=prices[i];
            count++;
        }
        else break;
        i++;
    }
    return count;
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    cout << maximumToys(a, k) << "\n";
}
