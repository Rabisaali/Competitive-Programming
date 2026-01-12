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
    int dx[] = {-1,0,1,-1,1,-1,0,1};
    int dy[] = {1,1,1,0,0,-1,-1,-1};
    int ans=0;
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            int count = 0;
            int total=0;
            for (int k=0; k<8; k++) {
                if (arr[i][j]=='S') continue;

                int ni = i+dx[k];
                int nj = j+dy[k];
                if (ni<0 || ni>=r || nj<0 || nj>=c) continue;
                else if (arr[ni][nj]=='.') count++;
                total++;
            }
            if (count > (total/2)) ans++;
        }
    }
    cout << ans << "\n";
}