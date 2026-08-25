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
        string s,t;
        cin>>s;
        cin>>t;
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<n;i++) {
            mp1[s[i]]++;
        }
        for(int i=0;i<n;i++) {
            mp2[t[i]]++;
        }
        if(mp1!=mp2) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}