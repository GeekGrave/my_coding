#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n,q;
    cin>>n>>q;
    ll ar[n];
    for(ll i=0;i<n;i++){
        cin>>ar[i];
    }
    map<ll,vector<ll> > startt;
    map<ll,vector<ll> > endd;
    for(ll j=0;j<q;j++){
        ll l,r,i;
        cin>>l>>r>>i;
        
        startt[l].push_back(i);
        endd[r+1].push_back(i);
    }
    ll ar1[n]={0};
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(startt.find(i+1)!=startt.end()){
            for(ll j = 0;j<startt[i+1].size();j++){
                sum+=startt[i+1][j];
            }
        }
        if(endd.find(i+1)!=endd.end()){
            for(ll j = 0;j<endd[i+1].size();j++){
                sum-=endd[i+1][j];
            }
        }
        ar1[i]+=sum;
        // cout<<ar[i]<<endl;
    }
    for(ll i=n-1;i>0;i--){
        // cout<<ar1[i]<<endl;
        ar[i]-=ar[i-1];
    }
    for(ll i=0;i<n;i++){
        ar[i]-=ar1[i];
    }
    for(ll i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
int main(){
//     ll t;
//     cin>>t;

// while(t--){
        solve();
    // }
    return 0;
}