#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll ar[n];
    map<int,int> m;
    for(ll i=0;i<n;i++){
        cin>>ar[i];
        m[ar[i]]++;
    }
    sort(ar,ar+n);
    vector<int> v,v1;
    for(auto i : m){
        v.push_back(i.first);
        if(i.second>1){
            for(int j=0;j<i.second-1;j++){
                v1.push_back(i.first);
            }
        }
    }
    for(auto i : v1){
        v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}