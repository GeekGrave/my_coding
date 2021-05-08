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
    ll n,k;
    cin>>n>>k;
    if(k==0){
        fin(i,1,n+1){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    if((n-k)<=k){
        cout<<-1<<endl;
        return;
    }
    ll j=n,i=1,ctr=0;
    while(i<=j){
        if(ctr<k){
            cout<<i<<" ";
            cout<<j<<" ";
            ctr++;
            i++;
            j--;
        }
        else{
            cout<<i<<" ";
            i++;
        }
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