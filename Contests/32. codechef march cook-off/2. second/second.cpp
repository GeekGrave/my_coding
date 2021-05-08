#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
ll ar[10001];
int f(){
    for(int i=1;i<=1001;i++){
        ar[i]=i*i;
    }
}
void solve(){
    ll i = 1;
    ll j=1001;
    
    for(int i=1;i<=1000;i++){
        cout<<i*i<<"\n";
        cout<<flush;
        int r;
        cin>>r;
        if(r==1){
            return;
        }
    }
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}