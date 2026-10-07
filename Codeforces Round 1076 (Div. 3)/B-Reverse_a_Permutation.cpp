#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++) {
        cin>>p[i];
    }
    for(int i=0;i<n;i++) {
        int mx=p[i],mx_idx=i;
        for(int j=i;j<n;j++) {
            if(p[j]>=mx) {
                mx=p[j];
                mx_idx=j;
            }
        }
        if(mx_idx != i) {
            reverse(p.begin()+i,p.begin()+mx_idx+1);
            break;
        }
    }
    for(auto x:p) {
        cout<<x<<" ";
    }
    cout<<nl;
   }
   return 0;
}