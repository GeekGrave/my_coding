#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define fill(a, x) memset(a, x, sizeof(a))
#define pb push_back
#define mp make_pair
#define popcount    __builtin_popcount     //used to count number of set bits in a integer
#define llpopcount  __builtin_popcountll
#define fin(i,c,n) for(ll i=c;i<n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;
bool ok = 0;
ll arr[22];
ll dp[10][1LL<<22];

void solve(){
    ll n,k;
    cin>>n>>k;
    ll ar[n];
    ll s=0;
    fin(i,0,n){
        cin>>ar[i];
        s+=ar[i];
    }
    if(s%k!=0 || n<k){
        cout<<"no\n";
        return;
    }
    ll x = s/k;
    fill(dp,0);
    ll maxBit = 1LL<<n;
    ll sum=0;

    fin(i,o,k){
        fin(mask,0,maxBit){
            if(!dp[i][mask]){
                continue;
            }
            sum=0;
            fin(j,n){
                if(!(mask & (1LL<<j)))
                    continue;
                sum+=ar[j];
            }
            
        }
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