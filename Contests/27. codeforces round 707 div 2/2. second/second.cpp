#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++){
        cin>>ar[i];
    }
    int ctr=0;
    vector<int> v;
    for(ll i=n-1;i>=0;i--){
        if(ar[i]>=ctr){
            ctr=ar[i];
            v.push_back(ctr);
        }
        else{
            ctr--;
            v.push_back(ctr);
        }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i]<=0){
            cout<<"0 ";
        }
        else{
            cout<<"1 ";
        }
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