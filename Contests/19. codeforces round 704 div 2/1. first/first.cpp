#include <bits/stdc++.h>
#define ll long long int
using namespace std;


ll ceill(ll a, ll b){
    if(a%b==0){
        return a/b;
    }
    else{
        return a/b+1;
    }
}
void solve(){
    ll p,a,b,c;
    cin>>p>>a>>b>>c;
    ll a1 = ceill(p,a) * a;
    ll b1 = ceill(p,b) * b;
    ll c1 = ceill(p,c) * c;
    ll minn = min(min(a1,b1),c1);
    ll ans = minn - p;
    cout<<ans<<endl;

}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}