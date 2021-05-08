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

void solve(){
    ll n,m;
    cin>>n>>m;
    ll ar[n][m];
    fin(i,0,n){
        fin(j,0,m){
            cin>>ar[i][j];
        }
    }
    fer(i,n-2,0){
        fin(j,0,m){
            if(j==0){
                ar[i][j]+=min(ar[i+1][j],ar[i+1][j+1]);    
            }
            else if(j==m-1){
                ar[i][j]+=min(ar[i+1][j],ar[i+1][j-1]);    
            }
            else{
                ar[i][j]+=min(ar[i+1][j],min(ar[i+1][j-1],ar[i+1][j+1]));
            }
        }
    }
    ll minn=INT_MAX;
    for(ll i=0;i<m;i++){
        minn=min(minn,ar[0][i]);
    }
    cout<<minn<<endl;
}

int main(){
    fast;
    ll t=1;
    // cin>>t;

    while(t--){
        solve();
    }
    return 0;
}