#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,k;
        cin>>a>>b>>k;
        ll ar[k],br[k];
        for(ll i=0;i<k;i++){
            cin>>ar[i];
        }
        vector<pair<ll,ll> > p;
        for(ll i=0;i<k;i++){
            cin>>br[i];
            p.push_back(make_pair(ar[i],br[i]));
        }
        
    }
}
