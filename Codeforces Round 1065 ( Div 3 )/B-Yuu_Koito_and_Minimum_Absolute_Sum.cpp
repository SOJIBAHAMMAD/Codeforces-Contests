#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        if(a[0]==-1 && a[n-1]==-1) {
            a[0]=a[n-1]=0;
            for(int i=1;i<n-1;i++) {
                if(a[i]==-1) {
                    a[i]=0;
                }
            }
            cout<<0<<endl;
        } else if(a[n-1]==-1) {
            a[n-1]=a[0];
            for(int i=1;i<n-1;i++) {
                if(a[i]==-1) {
                    a[i]=0;
                }
            }
            cout<<0<<endl;
        } else if(a[0]==-1) {
            a[0]=a[n-1];
            for(int i=1;i<n-1;i++) {
                if(a[i]==-1) {
                    a[i]=0;
                }
            }
            cout<<0<<endl;
        } else {
            ll ans= abs(a[n-1]-a[0]);
            for(int i=1;i<n-1;i++) {
                if(a[i]==-1) {
                    a[i]=0;
                }
            }
            cout<<ans<<endl;
        }
        for(int i=0;i<n;i++) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}