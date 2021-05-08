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
        ll even=0,odd=0,ctr=0;
        for(ll i=0;i<n;i++){
            cin>>ar[i];
    
            if(ar[i]%2==0)
                even++;
            else
            {
                odd++;
            }
        }
        if(odd==0 || even==0){
            ctr=(n-1)*2;
        }
        else if(odd>even){
            ctr=odd+((even-1)*2);
        }
        else
        {
            ctr=even+((odd-1)*2);
        }
        cout<<ctr<<endl;
    }
    return 0;
}