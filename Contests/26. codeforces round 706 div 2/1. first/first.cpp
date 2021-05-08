#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    cin.ignore();
    string s;
    cin>>s;
    map<char, int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    if(m.size()==(k+1)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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