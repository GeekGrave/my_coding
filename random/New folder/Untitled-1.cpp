// #include <iostream>
// #include<math.h>
#include<bits/stdc++.h>
#define ll long long int                   
using namespace std;

// #include <iostream> 
using namespace std; 
float round1(float var) 
{ 
    float value = (int)(var * 100 + .5); 
    return (float)value / 100; 
}  
                   
int main(){
   int t;
   cin>>t;

   while(t--){
        ll n;
        cin>>n;
        ll ar[n];
        unordered_map <ll,ll> u;    
        for(ll i = 0;i<n;i++){
            cin>>ar[i];
            u[ar[i]]++;
        }
        // sort(ar,ar+n);
        ll ctr=0;
        for(auto i : u){
            if(u[i]%2==0){
                ctr+=2;
            }
            else{
                ctr++;
            }
        }
        cout<<ctr<<endl;
    }


    
   return 0;
}