#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll c;
    cin>>c;
    ll k = (int)(log2(c));
    ll a = 1<<k;
    ll b=0;
    for(ll i=0;i<k;i++){
        ll x = c & (1 << i);
        if(x==0){
            a |= 1<<i;
            b |= 1<<i;
        }
        else{
            b |= 1<<i;
        }
    }
    cout<<a*b<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}