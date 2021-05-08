#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int a=9;
        for(ll i=0;i<n;i++){
            cout<<a--;
        }
        cout<<endl;
    }
}