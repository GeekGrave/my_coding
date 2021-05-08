#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ar[n];
        for(int i = 0;i<n;i++){
            cin>>ar[i];
        }
        ll m=-1,s;
        for(ll j=0;j<n;j++){
            ll i=j;
            s=0;
            while(i<n){
                
                s+=ar[i];
                i+=ar[i];
            }
            if(s>m){
                m=s;
            }
        }
        cout<<m<<endl;
    }

}