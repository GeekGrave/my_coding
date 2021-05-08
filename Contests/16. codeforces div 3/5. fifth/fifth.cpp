#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll ar[n];
        vector<pair<ll,ll> > m;
        for(ll i = 0;i<n;i++){
            cin>>ar[i];
            m.push_back({ar[i],i});
        }
        sort(ar,ar+n);
        ll pref[n];
        pref[0]=ar[0];
        for(ll i=1;i<n;i++){
            pref[i]=pref[i-1]+ar[i];
        }
        ll ans=1;
        ll i;
        ll lowest = ar[n-1];
        for(i=n-2;i>=0;i--){
            if(pref[i]<lowest){
                break;
            }
            lowest = ar[i];
            ans++;
        }
        cout<<ans<<endl;
        for(ll j=i+1;j<n;j++){
            cout<<m[j].second+1<<" ";
        }
        cout<<endl;
        // else{
        //     cout<<1<<endl;
        //     cout<<ar[n-1]<<endl;
        // }
    }
    return 0;
}