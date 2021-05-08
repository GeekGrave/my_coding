#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      ll f=0;
      while(n!=1){

         if(n%2!=0){
            f=1;
            break;
         }
         n/=2;
      }
      if(f==1){
         cout<<"YES\n";
      }
      else{
         cout<<"NO\n";
      }
   }
}
