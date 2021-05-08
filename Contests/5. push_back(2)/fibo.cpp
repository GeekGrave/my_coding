#include<bits/stdc++.h>
#include<numeric>
#define ll long long int
using namespace std;
ll f[10];
void fact(){
    f[0]=1;
    for(ll i=1;i<=9;i++){
        f[i]=i*f[i-1];
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    fact();
    ll t;
    cin>>t;
    
    while(t--){
        ll x;
        cin>>x;
        ll y=x;
        ll ctr=0;
        while(y){
            int d=y%10;
            ctr+=f[d];
            y/=10;
        }
        if(x==0){
            cout<<0<<endl;
            continue;
        }
        if(ctr==x)
            cout<<1<<"\n";
        else{
            cout<<0<<"\n";
        }
    }
    return 0;
}