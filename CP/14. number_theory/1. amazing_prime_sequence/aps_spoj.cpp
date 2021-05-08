#include<bits/stdc++.h>
#define ll long long int
using namespace std;


ll isPrime[10000001];

void fun(ll n){

    for(ll i=2;i<=n;i++)
        isPrime[i]=0;
    for(ll i=2;i<=n;i++){
        if(isPrime[i]==0){
            isPrime[i]=i;
            for(ll j=i;j<=n;j+=i){
                if(isPrime[j]==0){
                    isPrime[j]=i;
                }
            }   
        }
    }
}

ll f(ll p){
    return isPrime[p];
}
ll series(ll i){
    if( i==0 )
        return 0;
    if( i==1 )
        return 0;
    return series(i-1) + f(i);
}

int main(){
    ll t,n;
    int x=10000000;
    fun(x);
    cin>>t;
    while(t--){
        cin>>n;
        cout<<series(n)<<endl;
    }
    return 0;
}