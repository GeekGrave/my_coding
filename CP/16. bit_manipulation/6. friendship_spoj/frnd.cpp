#include<bits/stdc++.h>
#define ll unsigned long long 
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll ar[n];
    if(n==1){
        cout<<0;
        return 0;
    }
    for(ll i=0;i<n;i++){
        cin>>ar[i];
    }
    ll ans=0;
    for(ll i=0;i<64;i++){
        ll ctr=0;
        for(ll j=0;j<n;j++){
            if(ar[j] & (1LL<<i))
                ctr++;
        }
        ans+=ctr*(n-ctr)*(1LL<<i);
        cout<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}