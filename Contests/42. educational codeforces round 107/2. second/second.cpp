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
ll poww(ll a,ll b){
    ll ans=a;
    if(b==0){
        return 1;
    }
    fin(i,1,b){
        ans*=a;
    }
    return ans;
}

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll minn = min(a,b);
    ll maxx = max(a,b);
    // cerr<<pow(10,6)<<endl;
    fin(i,0,10){
        if(i==c){
            if(minn==a){
                cout<<poww(10,i-1)*poww(10,minn-c)<<" "<<poww(10,i-1)*poww(10,maxx-c)+poww(10,i-1)<<endl;
                return;
            }
            if(minn==b){
                cout<<poww(10,i-1)*poww(10,maxx-c)+poww(10,i-1)<<" "<<poww(10,i-1)*poww(10,minn-c)<<endl;
                return;
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