#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll et[6000000L];

void etf(){
    for(ll i = 1;i<6000000L;i++)
        et[i]=i;

    for(ll i = 2;i<=9999L;i++){
        if(et[i]==i){
            for(ll j = i;j<=9999L;j+=i){
                et[j]=et[j]-et[j]/i;
            }
        }
    }
    for(ll i = 2;i<6000000L;i++){
        et[i]=et[i]*et[i];
    }
}

int main(){

    etf();
    ll t;
    cin>>t;
    for(ll i = 1;i<=t;i++){
        ll a,b,s=0;
        cin>>a>>b;
        for(ll j = a;j<=b;j++){
            s=s+et[j];
        }
        cout<<"Case "<<i<<": "<<s<<"\n";
    }
}