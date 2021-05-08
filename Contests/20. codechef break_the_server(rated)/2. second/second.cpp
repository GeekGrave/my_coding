#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    ll ar[k];
    for(ll i=0;i<k;i++){
        cin>>ar[i];
    }
    string s[n];
    cin.ignore();
    for(ll i=0;i<n;i++){
        getline(cin,s[i]);
    }
    for(ll i=0;i<n;i++){
        ll ctr=0;
        for(ll j=0;j<k;j++){
            if(s[i][j]=='1'){
                ctr+=ar[j];
            }
        }
        cout<<ctr<<endl;
    }
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}