#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n%2==0){
            if(k%n==0){
                cout<<n<<endl;
            }
            else{
                cout<<k%n<<endl;
            }
            continue;
        }
        if(k<(n/2+1)){
            cout<<k<<endl;
        }
        else{
            ll p = (n/2+1);
            ll x = n/2;
            ll m = k-p;
            ll l = m/x;
            ll o = l+1;
            ll ans =  k%n+o;
            cout<<ans<<endl;
        }
    }
    return 0;
}