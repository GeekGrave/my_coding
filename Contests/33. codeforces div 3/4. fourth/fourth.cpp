#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll ar[n];
    map<ll,ll> m;
    for(ll i=0;i<n;i++){
        cin>>ar[i];
        m[ar[i]]++;
    }
    ll maxx=0;
    for(auto i : m){
        if(i.second>maxx){
            maxx=i.second;
        }
    }
    ll x = n-maxx;
    if(x>=maxx){
        if(n%2!=0){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else if(x<maxx){
        cout<<maxx-x<<endl;
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