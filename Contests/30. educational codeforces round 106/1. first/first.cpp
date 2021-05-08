#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n,k1,k2;
    cin>>n>>k1>>k2;
    ll w,b;
    cin>>w>>b;
    int ctr=0;
    if(k1+k2>=(2*w)){
        ctr++;
    }
    if((2*n)-(k1+k2)>=(2*b)){
        ctr++;
    }
    if(ctr==2){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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