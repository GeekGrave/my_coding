#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        ll x;
        cin>>n>>x;
        ll ar[n];
        for(ll i=0;i<n;i++){
            cin>>ar[i];
        }
        float smin=0,smax=0;
        ll i;
        for(i=0;i<n-1;i++){
            // if((ar[i]+ar[i+1])%x==0){
            //     float m = (float)(ar[i]+ar[i+1])/x;
            //     smin+=ceil(m);
            //     i++;
            // }
            // else{
            //     float m = (float)(ar[i])/x;
            //     smin+=ceil(m);
            // }
            if(ar[i]%3==0){
                smin+=ar[i]/x;
            }
            else if((ar[i]+ar[i+1])%x==0){
                smin+=(ar[i]+ar[i+1])/x;
                i++;
            }
            else{
                float m = (float)(ar[i]+ar[i+1])/x;
                smin+=ceil(m);
                i++;
            }
        }
        if(i<n){
            float m = (float)(ar[n-1])/x;
            smin+=ceil(m);
        }
        for(i=0;i<n-1;i++){
            if(ar[i]%x!=0){
                float m = (float)(ar[i])/x;
                smax+=ceil(m);
                // cout<<smax<<endl;
                // i++;
            }
            else if((ar[i]+ar[i+1])%x!=0){
                float m = (float)(ar[i]+ar[i+1])/x;
                smax+=ceil(m);
                i++;
                // cout<<"mai"<<smax<<endl;
            }
            else{
                float m = (float)(ar[i])/x;
                smax+=ceil(m);
                // cout<<smax<<endl;
            }
        }
        if(i<n){
            float m=float(ar[n-1])/x;
            smax+=ceil(m);
            // cout<<"nai"<<smax<<endl;
        }

        cout<<smin<<" "<<smax<<"\n";
    }
}