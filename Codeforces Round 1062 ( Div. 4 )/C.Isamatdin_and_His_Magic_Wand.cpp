#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        bool even_num=false,odd_num=false;
        vector<ll>v(n);
        for(ll i=0;i<n;i++) {
            cin>>v[i];
        }
        for(ll i=0;i<n;i++) {
            if(v[i]%2==0) {
                even_num=true;
            } else {
                odd_num=true;
            }
        }
        if(even_num==true && odd_num==true) {
            sort(v.begin(),v.end());
        }
        for(auto val : v) {
            cout<<val<<" ";
        }
        cout<<endl;

    }
    return 0;
}