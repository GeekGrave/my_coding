#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll p[n];
    map<ll,ll> m;
    for(ll i =0;i<n;i++){
        cin>>p[i];
        m[p[i]]=i;
    }
    ll k = n;
    // for(ll i = n;i>=1;i--){
    //     ll j;
    //     for(j = 0;j<k;j++){
    //         if(p[j]==i){
    //             break;
    //         }
    //     }
    //     for(ll q=j;q<k;q++){
    //         cout<<p[q]<<" ";
    //     }
    //     k=j;
    // }
    for(ll i = n;i>=1;i--){
        if(m[i]<k){
            for(ll j = m[i];j<k;j++){
                cout<<p[j]<<" ";
            }
            k=m[i];
        }
    }
    cout<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}