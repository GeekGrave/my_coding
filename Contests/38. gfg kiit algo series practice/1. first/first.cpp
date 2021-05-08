#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define popcount    __builtin_popcount     //used to count number of set bits in a integer
#define llpopcount  __builtin_popcountll
#define fin(i,c,n) for(ll i=c;i<n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    ll h[n];
    fin(i,0,n){
        cin>>h[i];
    }
    ll ans=INT_MAX;
    map<ll,ll> m;
    ll x=0,s=0,j=0;
    for(ll i=0;i<n-k+1;i++){
        while(x<k){
            x++;
            s+=h[j];
            j++;
        }
        m[s]=i;
        s-=h[i];
        x--;
    }
    ll minn=INT_MAX,pos;
    
    for(auto i : m){
        if(i.first<minn){
            minn=i.first;
            pos=i.second;
        }
    }
    cout<<pos+1<<endl;
}

int main(){
    fast;
    ll t;
    t=1;

    while(t--){
        solve();
    }
    return 0;
}