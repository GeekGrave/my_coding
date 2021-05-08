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
    ll n;
    cin>>n;
    ll ar[n+2];
    fin(i,0,n+2){
        cin>>ar[i];
    }
    sort(ar,ar+n+2);
    ll ar1[n+2];
    ar1[0]=ar[0];
    fin(i,1,n+2){
        ar1[i]=ar1[i-1]+ar[i];
    }
    if(ar1[n-1]==ar[n]){
        fin(i,0,n){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
        return;
    }
    fin(i,0,n+1){
        if(ar1[n]-ar[i]==ar[n+1]){
            fin(j,0,n+1){
                if(j!=i){
                    cout<<ar[j]<<" ";
                }
            }
            cout<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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