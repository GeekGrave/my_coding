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
    ll r,o,c;
    cin>>r>>o>>c;
    if(((20-o)*6)*6>(r-c)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main(){
    fast;
    ll t;
    // cin>>t;
    t=1;

    while(t--){
        solve();
    }
    return 0;
}