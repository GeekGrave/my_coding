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

struct Node{
    ll value=-1;
};
ll x;
ll r;
ll m;


void solve(){
    cin>>x;
    cin>>r;
    cin>>m;
    r*=60;
    m*=60;
    
    if(x>=r){
        if(r<=m){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        return;
    }
    r-=x;
    m-=x;
    if(r*2<=m){
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