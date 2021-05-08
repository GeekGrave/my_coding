#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        unordered_map<ll,ll> m;
        ll ar[n],br[n];
        for(ll i=0;i<n;i++){
            cin>>ar[i];
        }
        for(ll i=0;i<n;i++){
            cin>>br[i];
            m[ar[i]]=br[i];
        }
        

    }
}
