#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    ll l,r;
    for(ll i=1;i<n-2;i++){
        l = i+1;
        r = n-1;
        ll f=0;
        while(l<r){
            if(i + l + r == n){
                f=1;
                break;
            }
            else if(i + l + r < n)
                l++;
            else{
                r--;
            }
        }
        if(f==1){
            ll pro=i*l*r;
            ll lcm=INT_MAX;
            for(ll j=1;j<=pro;j++)
            {
                if(j%i==0 && j%l==0 && j%r==0)
                {
                    lcm=j;
                    break;
                }
            }
            if(lcm<=n/2) {
                cout<<i<<" "<<l<<" "<<r<<endl;
                return;
            }
        }
    }
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}