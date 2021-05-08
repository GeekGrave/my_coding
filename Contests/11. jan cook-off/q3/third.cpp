#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll isPrime[100];
unordered_map<ll,ll> m;
void sieve(){
    for(ll i=2;i<100;i++){
        isPrime[i]=1;
    }

    for(ll i=2;i<100;i++){
        if(isPrime[i]){
            for(ll j=i*i;j<100;j+=i){
                isPrime[j]=0;
            }
        }
    }

    ll ctr=0;
    m[0]=0;
    m[1]=0;
    m[2]=0;
    m[3]=0;
    m[4]=0;

    for(ll i=3;i<100;i++){
        ll x = 2+i;
        if(isPrime[x]){
            ctr++;
        }
        m[x]=ctr;
    }
}

int main(){
    sieve();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        // for(int i=2;i<20;i++){
        //     cout<<i<<" "<<m[i]<<endl;
        // }
        if(n<5){
            cout<<0<<endl;
            continue;
        }
        // if(isPrime[n] and isPrime[n+2]){
        //     m[n]--;
        // }
        // if(isPrime[n-1] and isPrime[n+1]){
        //     m[n]--;
        // }
        cout<<m[n]<<endl;
    }
}
