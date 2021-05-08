#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    ll t;
    cin>>t;

    while(t--){
        ll x,y;
        cin>>x;
        cin>>y;
        if(y==1 && x<=2){
            cout<<"Chef\n";
        }
        else{
            cout<<"Divyam\n";
        }
    }
    return 0;
}