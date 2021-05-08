#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

map<ll,ll> ar;
ll ans(ll n){
    if(n<12){
        return n;
    }
    if(ar[n]!=0){
        return ar[n];
    }
    ll a = max(n,ans(n/2) + ans(n/3) + ans(n/4));
    ar[n]=a;
    return ar[n];
}

void solve(){
    ll n;
    while(cin>>n){
        cout<<ans(n)<<endl;
    }
}
int main(){
    solve();
    return 0;
}