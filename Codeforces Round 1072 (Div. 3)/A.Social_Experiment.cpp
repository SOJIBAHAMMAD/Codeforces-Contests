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
    if(n==2) {
      cout<<2<<nl;
      continue;
    }
    if(n==3) {
      cout<<3<<nl;
      continue;
    }
    if(n%2==0) {
      cout<<0<<nl;
    } else {
      cout<<1<<nl;
    }
   }
   return 0;
}
