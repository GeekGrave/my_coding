#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll ctr=0;
    map<ll,ll> m;
    for(ll i=1;i<=n;i++){
        ll j=i,f=0;
        while(j!=0){
            if(j%10==7){
                f=1;
                break;
            }
            j=j/10;
        }
        if(f==1){
            m[i]++;
        }  
        j=i;f=0;
        while(j!=0){
            if(j%8==7){
                f=1;
                break;
            }
            j=j/8;
        }
        if(f==1){
            m[i]++;
        }  
    }
    // for(auto x: m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    cout<<n-m.size()<<endl;
    return 0;
}