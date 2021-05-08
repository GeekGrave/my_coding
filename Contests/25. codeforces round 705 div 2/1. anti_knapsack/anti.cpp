#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    int s=0;
    int ans = (n-k) + (k/2);
    cout<<ans<<endl;
    for(int i=k+1;i<=n;i++){
        cout<<i<<" ";
    }
    for(int i=(ceil)(k/2.0);i<k;i++){
        cout<<i<<" ";
    }
    
    cout<<"\n";
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}