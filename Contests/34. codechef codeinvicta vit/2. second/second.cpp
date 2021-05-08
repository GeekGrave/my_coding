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
    ll n;
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++){
        cin>>ar[i];
    }
    ll ar2[n]={0};
    ll ctr=0;
    ll maxx=-1;
    fin(i,0,n){
        fin(j,ar[i]-1,n){
            ar2[j]++;
        }
        maxx = max(maxx,ar[i]);
        ll f=0;
        fin(k,0,maxx){
            if(ar2[k]!=k+1){
                f=1;
                break;
            }
        }
        if(f==0){
            ctr++;
        }
    }

    cout<<ctr<<endl;
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