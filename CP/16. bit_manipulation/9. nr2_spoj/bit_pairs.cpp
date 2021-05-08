#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll ar[n];
    ll s=0;
    for(ll i=0;i<n;i++){
        cin>>ar[i];  
        s=s|ar[i];      
    }
    //cout<<s<<endl;
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans|=(~ar[i]&s);
    }
    cout<<ans<<endl;
    return 0;
}