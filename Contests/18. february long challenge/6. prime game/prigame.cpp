#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll isPrime[1000001L];
ll noPrime[1000001L];
void fun(){
    for(ll i=2;i<=1000000L;i++)
        isPrime[i]=0;
    ll x=0;
    for(ll i=2;i<=1000000L;i++){
        if(isPrime[i]==0){
            for(ll j=i*i;j<=1000000L;j+=i){
                isPrime[j]++;
            }
            noPrime[i]=++x;
        }
        else{
            noPrime[i]=x;
        }
    }
    noPrime[0]=0;
    noPrime[1]=0;
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    fun();
    ll t;
    cin>>t;
    
    
    while(t--){
        ll x,y;
        cin>>x;
        cin>>y;
    
        if(noPrime[x] > y){
            cout<<"Divyam\n";
        }
        else{
            cout<<"Chef\n";
        }
    }
    return 0;
}