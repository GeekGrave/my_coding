#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    string s;
    // cin.ignore();
    cin>>s;
    ll ctr=0;
    map<char,vector<ll> > m;
    for(ll i=1;i<s.length();i++){
        if(s[i-1]==s[i]){
            ctr++;
            m[s[i]].pb(i);
        }
    }
    if(m.size()==1){
        cout<<"YES\n";
    }
    else if(m.size()==2){
        // if(m['1'][0]==1){
        //     cout<<"NO\n";
        //     return;
        // }
        // cout<<m['0'].size()<<" "<<m['0'][(m['0'].size())]<<endl;
        if((m['1'][0])>(m['0'][(m['0'].size()-1)])){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    else{
        cout<<"YES\n";
    }
    
    
    
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}