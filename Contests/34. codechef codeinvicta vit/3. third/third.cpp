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
    ll n,m;
    cin>>n>>m;
    ll q[n];
    fin(i,0,n){
        cin>>q[i];
    }
    ll i;
    for(i=0;i<n-1;i++){
        if(q[i]<m){
            break;
        }
        q[i+1]+=(q[i]-m);
        // cout<<q[i+1]<<endl;
    }
    if(q[i]<m){
        // cout<<q[i+1]<<endl;
        cout<<i+1<<endl;
    }
    else{
        q[i]-=m;
        i++;
        cout<<q[i-1]/m+i+1<<endl;
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