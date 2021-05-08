#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define popcount    __builtin_popcount     //used to count number of set bits in a integer
#define llpopcount  __builtin_popcountll
#define fin(i,c,n) for(int i=c;i<n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;

vector<ll> v;
ll dist(ll mid, ll n, ll k){
    ll server = 1;
    ll last = 1;
    ll ans=0;
    fin(i,1,n+1){
        if(i-last >= mid){
            ans++;
            last=i;
            v.pb(i);
        }
        if(ans==k){
            return true;
        }
    }
    return false;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    ll lo=1,hi=n;
    ll ans=INT_MAX;
    v.pb(1);
    vector<pair<ll,vector<ll> > > s;
    while(lo<hi){
        ll mid = (lo+hi)/2;
        v.clear();
        if(dist(mid,n,k)){
            ans=min(ans,mid);
            lo=mid+1;
            pair<ll,vll> p;
            p.first=ans;
            p.second=v;
            s.pb(p);
        }
        else{
            hi=mid;
        }
    }
    ll ctr=0;
    
    for(auto j : s){
        vector<ll> vv = j.second;
        for(ll i=0;i<vv.size();i++){
            cout<<vv[i]<<" ";
        // if(vv[i]-vv[i-1]==ans){
        //     ctr++;
        // }
        }
        cout<<endl;
    }
    
    cout<<endl;
    // if((n-v[v.size()-1])+v[0]==ans){
    //     ctr++;
    // }
    // cout<<v.size()<<endl;
    cout<<ans+1<<" "<<ctr<<endl;

}

int main(){
    fast;
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}