#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<ll,ll> >v;
    for(ll i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    ll ar[n];
    for(ll i=0;i<n;i++){
        cin>>ar[i];
    }

    if(n==1){
        cout<<v[0].first+ar[0]<<endl;
        return;
    }
    vector<pair<int,int> > x;
    int arrival = v[0].first + ar[0];
    int dep = (ceil)((v[0].second-v[0].first)/2.0) + arrival;
    if(dep<v[0].second){
        dep = v[0].second;
    }
    x.push_back({arrival,dep});
    
    for(int i=1;i<n;i++){
        int t = v[i].first-v[i-1].second+ar[i];
        int arr = x[i-1].second+t;
        int de = (ceil)((v[i].second-v[i].first)/2.0) + arr;
        if(de<v[i].second){
            de = v[i].second;
        }

        x.push_back({arr,de});
    }

    cout<<x[x.size()-1].first<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}