#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll m,n;
    cin>>m>>n;
    // vector<pair<ll,ll> > v;
    vector<ll> v;
    for(ll i=1;i<=n;i++){
        ll d,p;
        cin>>d>>p;
        // v.push_back({p,d});
        for(ll j=1;j<=p;j++){
            v.push_back(d);
        }
    }
    sort(v.begin(),v.end());
    ll ans=INT_MAX;
    // cout<<v.size()<<endl;
    for(ll i=0;i<v.size()-m+1;i++){
        ans = min(ans,v[i+m-1]-v[i]);
    }
    cout<<ans<<endl;
    // reverse(v.begin(),v.end());
    
    
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}