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
    ll n;
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++){
        cin>>ar[i];
    }
    for(ll i=0;i<n;i++){
        ll ctr=0;
        for(ll j=i-1;j>=0;j--){
            if(ar[j]>ar[i]){
                break;
            }
            else if(ar[i]==ar[j]){
                ctr++;
            }
        }
        for(ll k=i+1;k<n;k++){
            if(ar[k]>ar[i]){
                break;
            }
            else if(ar[i]==ar[k]){
                ctr++;
            }
        }
        cout<<ctr<<" ";
    }
    cout<<endl;
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