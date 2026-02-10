#include<bits/stdc++.h>
using namespace std;
int main(){
    long long N;
    cin>>N;
    vector<long long>a(N);
    vector <long long>arr(N);
    arr[0]=a[0];
    for(long long i=0;i<N;i++){
        cin>>a[i];
        if (i==0) continue;
        else {
            arr[i]+=arr[i-1];
        }

    }
    long long Q;
    cin>>Q;
    int c,b;

    while(Q--) {
        long long sum=0;
        cin >> b >> c;
        for (long long i=b; i<=c; i++) {
            
        }
        cout<<sum<<endl;
    }
}