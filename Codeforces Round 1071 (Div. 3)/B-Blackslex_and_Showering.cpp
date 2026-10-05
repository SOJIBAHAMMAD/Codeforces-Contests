#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int total_sum(vector<int>&a,int n,int to_delete) {
    int sum1 =0;
    int ignore=-1;
    for(int i=1;i<=n;i++) {
        if(i==to_delete) {
            continue;
        }
        if(ignore!=-1) {
            sum1 += abs(a[i]-a[ignore]);
        }
        ignore=i;
    }
    return sum1;
}
int main () {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--) {
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
    int mx1=INT_MIN,mx1_idx=-1;
    for(int i=1;i<=n;i++) {
        if(a[i]>mx1) {
            mx1=a[i];
            mx1_idx=i;
        }
    }
    int mx2=INT_MIN,mx2_idx=-1;
    for(int i=n;i>=1;i++) {
        if(a[i]>mx2) {
            mx2=a[i];
            mx2_idx=i;
        }
    }
    int ans1=total_sum(a,n,mx1_idx);
    int ans2=total_sum(a,n,mx2_idx);

    int ans = min(ans1,ans2);
    cout<<ans<<nl;
   }
   return 0;
}