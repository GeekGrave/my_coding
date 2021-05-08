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
#define fer(i,c,n) for(ll i=c;i>=n;i--)
#define fill(a, x) memset(a, x, sizeof(a))
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;

ll ar[1000000];
ll solving(ll n){
    if(n==0){
        return 0;
    }
    if(n<0){
        return 10000000;
    }
    if(ar[n]!=0){
        return ar[n];
    }
    ll ans1 = 1+solving(n-2);
    ll ans2 = 1+solving(n-3);
    ll ans3 = 1+solving(n-5);

    ll ans = min(ans1,min(ans2,ans3));
    ar[n]=ans;
    return ar[n];
}

void solve(){
    ll n;
    cin>>n;
    cout<<solving(n);
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