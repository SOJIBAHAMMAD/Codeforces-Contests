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
    int s,k,m;
    cin>>s>>k>>m;
    int x=min(s,k);
    int ans = max(0,x-(m%k));
    cout<<ans<<nl;
   }
   return 0;
}