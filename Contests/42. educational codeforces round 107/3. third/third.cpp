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
    ll n,q;
    cin>>n>>q;
    ll ar[n+100];
    mll m,m1;
    fin(i,0,n){
        cin>>ar[i];
    }
    fer(i,n-1,0){
        m[ar[i]]=i+1;
    }
    ll ctr=0;
    while(q--){
        ll x;
        cin>>x;
        ll loc;
        fin(i,0,n){
            if(ar[i]==x){
                cout<<i+1<<" ";
                loc=i+1;
                break;
            }
        }
        fer(i,loc-2,0){
            ar[i+1]=ar[i];
        }
        ar[0]=x;
    }
    cout<<endl;
}

int main(){
    fast;
    ll t=1;

    while(t--){
        solve();
    }
    return 0;
}