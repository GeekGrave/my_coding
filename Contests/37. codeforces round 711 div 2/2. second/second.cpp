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
    ll n,w;
    cin>>n>>w;
    vector<ll> ar;
    ll ctr=0;
    map<ll,ll> m;
    unordered_map<ll,ll> m1;
    fin(i,0,n){
        int x;
        cin>>x;
        ar.pb(x);
        ctr+=ar[i];
        m1[ar[i]]++;
    }
    vector<ll> v1;
    for(auto i:m1){
        v1.pb(i.first);
    }
    sort(v1.begin(),v1.end());
    reverse(v1.begin(),v1.end());
    
    ll s=0;
    for(auto i:v1){
        // cout<<i<<" ";
        if(s+i<=w){
            s+=i;
        }
        else{
            break;
        }
    }
    ll ans = ctr/s;
    if(ctr%s!=0){
        ans++;
    }

    cout<<ans<<endl;
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