#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll h[n],iq[n];
        vector<pair<ll,ll> > v;
        for(ll i = 0;i<n;i++){
            cin>>h[i];
            
        }
        for(ll i = 0;i<n;i++){
            cin>>iq[i];
            v.push_back(make_pair(h[i],iq[i]));
        }
        sort(v.begin(), v.end()); 
        ll ctr,maxx=INT_MIN,min=INT_MAX;
        for(ll i=0;i<n-1;i++){
            ctr=1;
            ll min=v[i].second;
            // cout<<v[i].first<<" "<<v[i].second<<endl
    
            for(ll j=i+1;j<n;j++){
                if((v[j].second)>=min){
                    continue;
                }
                else{
                    min=v[j].second;
                    ctr++;
                }
            }
            if(ctr>maxx){
                maxx=ctr;
            }
        }
        cout<<maxx<<endl;
    }
    return 0;
}