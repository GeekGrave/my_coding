#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll size = 2*n;
        ll ar[size];
        for(ll i = 0;i<2*n;i++){
            cin>>ar[i];
            if(ar[i]%!=0){
                cout<<"NO\n";
                return 0;
            }
        }
        cout<<"YES\n";
    }
}
