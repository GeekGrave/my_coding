#include <bits/stdc++.h>
#define ll long long int
using namespace std;

map<ll,ll> ar;

void fun(){
    for(ll i=1;i<10001;i++){
        ar[i*i*i]=i;
    }
}

int main(){
    ll t;
    cin>>t;
    fun();
    while(t--){
        ll x;
        cin>>x;
        int f=0;
        // cout<<(ll)(pow(x,1/3.0))<<endl;
        for(ll i=1;i<=(ll)(pow(x,1/3.0));i++){   
            if(ar[x-i*i*i]!=0){
                cout<<"YES\n";
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<"NO\n";
        }
    }
    return 0;
}