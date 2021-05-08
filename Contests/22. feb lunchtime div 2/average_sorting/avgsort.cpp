#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++){
       cin>>ar[i]; 
    }
    for(ll i=1;i<n;i++){
        if(ar[i]>ar[i-1]){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
    return;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}