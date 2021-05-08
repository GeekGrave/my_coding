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
    ll n,m;
    cin>>n>>m;
    ll ar[n];
    mll ma;
    fin(i,0,n){
        cin>>ar[i];
        ma[ar[i]]++;
    }
    if(ma.size()!=m){
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