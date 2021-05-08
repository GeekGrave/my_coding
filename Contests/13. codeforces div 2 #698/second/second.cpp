#include<bits/stdc++.h>
using namespace std;

#define ll long long int

bool check(ll x,ll d){
    while(x!=0){
        int rem = x%10;
        if(rem==d){
            return true;
        }
        x/=10;
    }
    return false;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll q,d;
        cin>>q>>d;
        ll ar[q];
        for(ll i=0;i<q;i++){
            cin>>ar[i];
        }
        for(ll i=0;i<q;i++){
            if(check(ar[i],d)){
                cout<<"YES\n";
                continue;
            }
            ll found = false;
            while(!found and ar[i]>0){
                ar[i]-=d;
                if(check(ar[i],d)){
                    found = true;
                    break;
                }
            }
            if(found){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}
