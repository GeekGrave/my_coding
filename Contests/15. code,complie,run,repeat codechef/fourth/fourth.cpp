#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ar[n],s=0;
        for(ll i=0;i<n;i++){
            cin>>ar[i];
            s+=ar[i];
        }
        if(s%2==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}