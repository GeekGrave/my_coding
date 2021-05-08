#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll ar[n+1]={0};
        for(ll i=0;i<q;i++){
            ll l,r;
            cin>>l>>r;
            ll a=1;
            for(ll i=l;i<=r;i++)
                ar[i]+=a++;
        }
        for(ll i=1;i<=n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    }
}