#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n;
    cin>>n;

    ll ar[n];
    vector<pair<ll, ll> > v;
    for(ll i=0;i<n;i++){
        cin>>ar[i];
        v.push_back({ar[i],i});
    }
    map<ll, pair<ll,ll> > m;

    for(ll i = 0;i<min(n,(ll)4000);i++){
        for(ll j= i+1;j<min(n,(ll)4000);j++){
            int z = ar[i]+ar[j];
            if(m.find(z)!=m.end()){
                if(j!=m[z].first && j!=m[z].second && i!=m[z].first && i!=m[z].second){
                    cout<<"YES\n";
                    cout<<i+1<<" "<<j+1<<" "<<m[z].first+1<<" "<<m[z].second+1<<endl;
                    return 0;
                }
            }
            else{
                m[z] = {i,j};   
            }
        }
    }
    cout<<"NO\n";
    return 0;
}