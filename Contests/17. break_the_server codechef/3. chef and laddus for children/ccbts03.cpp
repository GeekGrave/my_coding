#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;
        ll ar[n];
        for(ll i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        ll minn = INT_MAX;
        for(ll i=0;i<n-k;i++){
            ll ans = ar[i+k-1]-ar[i];
            if(ans<minn){
                minn=ans;
            }
        }
        cout<<minn<<endl;
    }
    return 0;
}