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

void solve(){
    ll x,r,m;
    cin>>x>>r>>m;
    r = r*60;
    m = m*60;
    ll ans=x;
    if(x>=r){
        cout<<"YES\n";
        return;
    }
    ll a = r-x;
    if(a+r<=m){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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