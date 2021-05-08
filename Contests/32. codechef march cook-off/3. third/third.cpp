#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    ll ar[n];
    ll pref[n];
    
    // int one=0,zero=0;
    for(ll i=0;i<n;i++){
        cin>>ar[i];
    }
    pref[0]=ar[0];
    for(ll i=1;i<n;i++){
        pref[i]=pref[i-1]+ar[i];
    }
    vector<pair<int,int> > m;
    // int x=0;
    for(ll i=0;i<n-k-1;i+=k){
        
        int x = pref[i+k-1]-pref[i];
        m.push_back({x,i});
    }
    sort(m.begin(), m.end()); 
    ll ans = 0;
    int x=pref[n-1];
    for(auto i:m){
        if(i.first==0){
            continue;
        }
        else{
            int ctr=0;
            for(int j=i.second;j<i.second+k-1;j++){
                if(ctr!=1)
                    if(ar[j]==1)
                        ctr=1;
                else{
                    pref[j]-=1;
                }
            }
        }
    }
    cout<<pref[n-1]<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}