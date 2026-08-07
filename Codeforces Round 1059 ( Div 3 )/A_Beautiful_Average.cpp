#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int mx_avg=INT_MIN;
        for(int i=0;i<n;i++) {
            int sum=0;
            for(int j=i;j<n;j++) {
                sum+=arr[j];
                int avg=sum/(j-i+1);
                mx_avg=max(avg,mx_avg);
            }
        }
        cout<<mx_avg<<endl;

    }
    return 0;
}
