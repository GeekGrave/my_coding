#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    if(k==0){
        cout<<n<<endl;
        return;
    }
    cout<<n%k<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}