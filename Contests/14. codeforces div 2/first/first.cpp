#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll ceil(ll a,ll b){
    if(a%b){
        return a/b+1;
    }
    return a/b;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(k>=n){
            cout<<ceil(k,n)<<endl;
        }
        else{
            k = ceil(n,k) * k;
            cout<<ceil(k,n)<<endl;
        }

    }
}