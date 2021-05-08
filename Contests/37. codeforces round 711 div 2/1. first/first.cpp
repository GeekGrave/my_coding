#include <bits/stdc++.h>
#include<algorithm>
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
    ll n;
    cin>>n;
    ll y=n;
    ll s;
    ll x;
    while(1){
        s=0;
        x=y;
        while(x!=0){
            s+=x%10;
            x/=10;
        }
        if(__gcd(s,y)>1){
            break;
        }
        y++;
    }
    cout<<y<<endl;
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