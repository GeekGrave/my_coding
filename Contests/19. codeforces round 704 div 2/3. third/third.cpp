#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,m;
    cin>>n>>m;
    cin.ignore();
    string s;
    getline(cin,s);
    // cin.ignore();
    string t;
    getline(cin,t);
    map<char,vector<int> > v1,v2;
    for(int i=0;i<n;i++){
        v1[s[i]].push_back(i);
    }
    for(int i=0;i<m;i++){
        v2[t[i]].push_back(i);
    }
    vector<int> v;
    
    for(auto i : v1){
        // cout<<i.first<<endl;
        if(v2[i.first].size()!=0){
            v.push_back((i.second)[0]);
            // cout<<i.second[0];
        }
    }
    ll maxx=-1;
    for(int i=0;i<v.size();i++){
        // cout<<v[i]<<" ";
        if(v[i]-v[i-1]>maxx){
            maxx=v[i]-v[i-1];
        }
    }
    cout<<maxx<<endl;

    // cout<<s<<endl<<t<<endl;
}
int main(){
    // ll t;
    // cin>>t;

    // while(t--){
        solve();
    // }
    return 0;
}