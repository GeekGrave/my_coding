#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll ar[n];
    ll neg=0;
    for(ll i = 0;i<n;i++){
        cin>>ar[i];
        if(ar[i]<0){
            neg++;
        }
    }
    if(neg==n){
        cout<<-1<<endl;
        return;
    }
    // ll pref[n];
    // pref[0]=ar[0];
    // for(ll i=1;i<n;i++){
    //     pref[i]=pref[i-1]+ar[i];
    // }
    // ll ans = pref[n-1];
    // for(ll i=0;i<n;i++){
    //     ans = max(ans,(pref[n-1]-pref[i]));
    // }

    ll m1=0,m2=0;
    for(ll i = 0;i<n;i++){
        m1+=ar[i];
        if(m1<0){
            m1=0;
        }
        else if(m2<m1){
            m2=m1;
        }
    }
    // if(m2==0){
    //     cout<<-1<<endl;
    // }
    cout<<m2<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}