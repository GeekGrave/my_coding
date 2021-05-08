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
       ll ctr=0,ctr1=0;
       for(ll i=0;i<n;i++){
           cin>>ar[i];
           if(ar[i]%2!=0){
               ctr++;
           }
           else{
               ctr1++;
           }
       }
        if(n==1){
          cout<<"0\n";
          continue;
        }
       if(ctr<ctr1) cout<<ctr<<endl;
       else cout<<ctr1<<endl;
    }
}
