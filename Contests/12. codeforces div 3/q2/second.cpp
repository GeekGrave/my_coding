#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n<2020){
            cout<<"NO\n";
            continue;
        }
        if(n%2020==0){
            cout<<"YES\n";
            continue;
        }

        // if(n/2020>=n%2020){
        //     cout<<"YES\n";
        // }
        // else{
        //     cout<<"NO\n";
        // }
        if(n%2021==0){
            cout<<"YES\n";
            continue;
        }
        ll n1=n-(n%10);
        if(n1%2020==0){
            int x=(n1/2020)%10;
            int d=n%10;
            if(d<=x){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
}
