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
#define fill(a, x) memset(a, x, sizeof(a))
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
    ll h,w;
    cin>>h>>w;
    ll ar[h][w];
    fin(i,0,h){
        fin(j,0,w){
            cin>>ar[i][j];
        }
    }
    for(ll i=h-2;i>=0;i--){
        fin(j,0,w){
            if(j==0){
                ar[i][j]+=max(ar[i+1][j],ar[i+1][j+1]);    
            }
            else if(j==w-1){
                ar[i][j]+=max(ar[i+1][j],ar[i+1][j-1]);    
            }
            else{
                ar[i][j]+=max(ar[i+1][j],max(ar[i+1][j-1],ar[i+1][j+1]));
            }
        }
    }
    ll maxx=-1;
    for(ll i=0;i<w;i++){
        maxx=max(maxx,ar[0][i]);
    }
    cout<<maxx<<endl;

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