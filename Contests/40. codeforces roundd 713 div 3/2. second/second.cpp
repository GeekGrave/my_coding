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
    vector<pair<ll,ll> > v;
    ll n;
    cin>>n;
    char ar[n][n];
    fin(i,0,n){
        fin(j,0,n){
            cin>>ar[i][j];
            if(ar[i][j]=='*'){
                v.pb({i,j});
            }
        }
    }
    if(v[0].first==v[1].first){
        ll r = v[0].first;
        ll c1 = v[0].second;
        ll c2 = v[1].second;
        if(r==n-1){
            ar[r-1][c1]='*';
            ar[r-1][c2]='*';
        }
        else{
            ar[r+1][c1]='*';
            ar[r+1][c2]='*';
        }
    }

    else if(v[0].second==v[1].second){
        ll r1 = v[0].first;
        ll r2 = v[1].first;
        ll c = v[0].second;
        if(c==n-1){
            ar[r1][c-1]='*';
            ar[r2][c-1]='*';
        }
        else{
            ar[r1][c+1]='*';
            ar[r2][c+1]='*';
        }
    }

    else{
        ll r1 = v[0].first;
        ll r2 = v[1].first;
        ll c1 = v[0].second;
        ll c2 = v[1].second;

        ar[r1][c2]='*';
        ar[r2][c1]='*';
    }
    fin(i,0,n){
        fin(j,0,n){
            cout<<ar[i][j];
        }
        cout<<endl;
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