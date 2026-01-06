#include <bits/stdc++.h>
using namespace std;
#define LL long long int
int main () {
    int r, c;
    cin >> r >> c;
    char arr[r][c];
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            cin >> arr[i][j];
        }
    }
    int ans=0;
    for (int i=0; i<r; i++) {
        
        for (int j=0; j<c; j++) {
            int count = 0;
            if(i==0 && j==0) {
                if (arr[i][j]=='S') continue;
                else {
                    if (arr[i][j+1] == 'S') count++;
                    if (arr[i+1][j] == 'S') count++;
                    if (arr[i+1][j+1] == 'S') count++;
                    if (count <= 1) ans++;
                }
            }
            else if (i==0 && j>0 && j<c-1) {
                if (arr[i][j]=='S') continue;
                else {
                    if (arr[i][j-1]=='S') count++;
                    if (arr[i][j+1]=='S') count++;
                    if (arr[i+1][j-1]=='S') count++;
                    if (arr[i+1][j]=='S') count++;
                    if (arr[i+1][j+1]=='S') count++;
                    if (count < 3) ans++; 
                }
            }
            else if (i==0 && j==c-1) {
                if (arr[i][j]=='S') continue;
                else {
                    if (arr[i][j-1]=='S') count++;
                    if (arr[i+1][j-1]=='S') count++;
                    if (arr[i+1][j]=='S') count++;
                    if (count <= 1) ans++;
                }
            }
            else if (i>0 && i<r-1 && j==0) {
                if (arr[i][j]=='S') continue;
                else {
                    if (arr[i][j+1]=='S') count++;
                    if (arr[i-1][j]=='S') count++;
                    if (arr[i+1][j]=='S') count++;
                    if (arr[i-1][j+1]=='S') count++;
                    if (arr[i][j+1]=='S') count++;
                    if (arr[i+1][j+1]=='S') count++;
                    if (count < 3) ans++;
                }
            }
            else if (i>0 && i<r-1 && j==c-1) {
                if (arr[i][j]=='S') continue;
                else {
                    if (arr[i][j-11]=='S') count++;
                    if (arr[i-1][j]=='S') count++;
                    if (arr[i+1][j]=='S') count++;
                    if (arr[i-1][j-1]=='S') count++;
                    if (arr[i][j-1]=='S') count++;
                    if (arr[i+1][j-1]=='S') count++;
                    if (count < 3) ans++;
                }
            }
            else if (i==r-1 && j==0) {
                if (arr[i][j]=='S') continue;
                else {
                    if (arr[i][j+1]=='S') count++;
                    if (arr[i-1][j+1]=='S') count++;
                    if (arr[i-1][j]=='S') count++;
                    if (count <= 1) ans++;
                }
            }
            else if (i==r-1 && j==c-1) {
                if (arr[i][j]=='S') continue;
                else {
                    if (arr[i][j-1]=='S') count++;
                    if (arr[i-1][j-1]=='S') count++;
                    if (arr[i-1][j]=='S') count++;
                    if (count <= 1) ans++;
                }
            }
            else if (i==r-1 && j>0 && j<c-1) {
                if (arr[i][j]=='S') continue;
                else {
                    if (arr[i][j-1]=='S') count++;
                    if (arr[i][j+1]=='S') count++;
                    if (arr[i-1][j-1]=='S') count++;
                    if (arr[i-1][j]=='S') count++;
                    if (arr[i-1][j+1]=='S') count++;
                    if (count < 3) ans++; 
                }
            }
            else {
                if (arr[i][j]=='S') continue;
                else {
                    if (arr[i-1][j-1]=='S') count++;
                    if (arr[i-1][j]=='S') count++;
                    if (arr[i-1][j+1]=='S') count++;
                    if (arr[i][j-1]=='S') count++;
                    if (arr[i][j+1]=='S') count++;
                    if (arr[i+1][j-1]=='S') count++;
                    if (arr[i+1][j]=='S') count++;
                    if (arr[i+1][j+1]=='S') count++;
                    if (count < 4) ans++;
                }
            }
        }
    }
    cout << ans << "\n";
}