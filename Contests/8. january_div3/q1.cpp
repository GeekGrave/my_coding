#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,d;
        cin>>n>>k>>d;
        ll ar[n];
        ll s=0;
        for(ll i=0;i<n;i++){
            cin>>ar[i];
            s+=ar[i];
        }
        ll total = s/k;
        if(total>=d){
            cout<<d<<endl;
            continue;
        }
        else{
            cout<<total<<endl;
            continue;
        }

    }
}