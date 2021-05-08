#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll> arr(n+3,0);
        vector<pair<ll, ll> > indices;
        ll l,r;
        while(q--){
            cin>>l>>r;
            arr[l]++;
            arr[r+1]--;   
            indices.push_back({l,r+1});
        }
        for(int i = 1;i<=n;i++){
            arr[i]+=(arr[i-1]);
        }

        for(auto x:indices){
            arr[x.second]-=(x.second-x.first);
        }
        for(int i=1;i<=n;i++){
            arr[i]+=(arr[i-1]);
        }
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}