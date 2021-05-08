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
    ll a,y,x;
    cin>>a>>y>>x;
    // int t=0;
    pair<ll,ll> p = {x,y};
    if(y==a){
        cout<<a*x<<endl;
        return;
    }
    if(y>a){
        cout<<a*x+1<<endl;
        return;
    }
    ll t = a-y;
    ll ans = x*y;
    cout<<ans<<endl;
    
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