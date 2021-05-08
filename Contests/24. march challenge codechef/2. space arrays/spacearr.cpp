#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll ar[n];
    // map<ll,ll> m;
    for(ll i=0;i<n;i++){
        cin>>ar[i];
        // m[ar[i]]++;
    }
    sort(ar,ar+n);
    for (int i = 0; i < n; i++){
        if(ar[i]>i+1){
            cout<<"Second"<<endl;
            return;
        }
    }
    int s=0;
    for(int i=1;i<n;i++){
        s+=(i+1)-ar[i];
    }
    if(s%2==0){
        cout<<"Second\n";
    }
    else{
        cout<<"First\n";
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