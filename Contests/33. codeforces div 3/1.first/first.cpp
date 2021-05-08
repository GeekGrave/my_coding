#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n,m,x;
    cin>>n>>m>>x;

    ll a = x/n;
    ll b = x%n;

    if(b==0){
        b=n;
        a--;
    }

    ll ans = 0;
    ans+= a+1;

    ans+= (b-1)*m;
    if(m==1 || n==1){
        cout<<x<<endl;
        return;
    }
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