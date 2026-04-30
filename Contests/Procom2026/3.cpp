#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    for (int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }
    int max=0;
    int count=0;
    for(int i=0; i<n; i++) {   
        for(int k=i; k<n; k++) {
            int temp=0;
            for (int j=0; j<m; j++) {
                //if(i+1==n) break;
                if(arr[i][j]+arr[k][j] != 0) {
                    temp++;
                }
                
            }
            if (temp>max) {
                max=temp;
                count=1;
            }
            else if (temp==max) count++;
            cout << "temp: " << temp << "count: " << count << "*\n";
        
        }
        
    }
    cout << max << "\n";
    cout << count << "\n";
}