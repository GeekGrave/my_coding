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
void read_input(){
    #ifndef ONLINE_JUDGE
        freopen("inputA.txt","r",stdin);
        freopen("outputA.txt","w",stdout);
    #endif
}

void solve(){
    ll n;
    cin>>n;
    map<ll,vector<ll> > m;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        m[x].pb(y);
    }

    ll ans=0,anss=0;
    for(auto i:m){
        ll z=0,o=0;
        for(auto j : i.second){
            if(j==0){
                z++;
            }
            else{
                o++;
            }
            if(z>o){
                ans =(-1)*(i.first) * (z);
            }
            else{
                ans = o*i.first;
            }
        }
        anss+=ans;
        // cout<<i.first<<" "<<z<<" "<<o<<endl;
    }
    cout<<anss<<endl;
}

int main(){
    fast;
    // read_input();

    ll t=1;
    // cin>>t;

    while(t--){
        solve();
    }
    return 0;
}