#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll t;
    cin>>t;
    while(t--){
        ll ar[3];
        for(int i=0;i<3;i++){
            cin>>ar[i];
        }
        sort(ar,ar+3);
        if(ar[0]+ar[1]==ar[2]){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
