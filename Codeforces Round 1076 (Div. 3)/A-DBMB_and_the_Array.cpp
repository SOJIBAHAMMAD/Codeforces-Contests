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
    int n,s,x;
    cin>>n>>s>>x;
    vector<int>a(n);
    int sum=0;
    for(auto &val:a) {
      cin>>val;
      sum += val;
    }
    if(sum <= s && (s-sum)%x==0) {
      cout<<"YES"<<nl;
    } else {
      cout<<"NO"<<nl;
    }
   }
   return 0;
}
