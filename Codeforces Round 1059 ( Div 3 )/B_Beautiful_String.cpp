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
        string s;
        cin>>s;
        int first_0=-1;
        int count=0;
        for(int i=1;i<=n;i++) {
            if(s[i]=='0') {
                first_0=i;
                count++;
            }
        }
        int last_0or1=-1;
        for(int i=first_0;i<=n;i++) {
            if(s[i+1]=='1' && s[i+2]=='0') {
                last_0or1=i+1;
                count++;
                break;
            } else if(s[i+1]=='1' && s[i+2]=='1') {
                last_0or1=i+1;
                count++;
            }
        }
        int idx=first_0+count;
        cout<<idx<<endl;

    }
    return 0;
}