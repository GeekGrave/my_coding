#include <bits/stdc++.h>
#define ll long long int
#define ld long double
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll ar[n+1];

    for(ll i=1;i<=n;i++){
        cin>>ar[i];
    }

    ll ans=0;
    ll f=0;
    // ld j;
    for(ll i=1;i<=n;i++){
        for(ll j=n;j>i;j--){
            ld m = (ld)(ar[j]-ar[i])/((j-i)*1.0);
            // ll f=0;
            f=0;
            for(ll k=i+1;k<j;k++){
                ld x = (ld)m*(k-i)+ar[i];
                if((ld)ar[k]>x){
                    f=1;
                    break;
                }
            }
            if(f==1){
                continue;
            }
            else{
                if((j-i)>ans){
                    ans=j-i;
                }
            }   
        }  
    }
    cout<<ans<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}