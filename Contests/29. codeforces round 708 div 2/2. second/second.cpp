#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n,m;
    cin>>n>>m;
    map<ll,ll> ar;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        ll y = x%m;
        ar[y]++;

        // cin>>ar[i];
    }
    if(n==1){
        cout<<1<<endl;
        return;
    }
    // if(n==2){
    //     if((ar[0]+ar[1])%m==0){
    //         cout<<1<<endl;
    //     }
    //     else{
    //         cout<<2<<endl;
    //     }
    //     return;
    // }
    ll ans=0;
    for(auto i : ar){
        if(i.first==0){
            ans++;
        }
        else if(i.first*2==m){
            ans++;
        }
        else if(ar.find(m-i.first) == ar.end()){
            ans+=i.second;
        }
        else if(m-i.first>i.first){
            ll a = i.second;
            ll b = ar[m-i.first];
            if(abs(a-b)<=1)
                ans++;
            else if(a>b){
                a-=(b+1);
                ans++;
                ans+=a;
            }
            else{
                b-=(a+1);
                ans++;
                ans+=b;
            }
        }
    }
    cout<<ans<<"\n";
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}