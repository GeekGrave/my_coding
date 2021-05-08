#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string a;
    cin>>a;
    map<char,int> m;
    for(int i=0;i<a.length();i++){
        m[a[i]]++;
    }
    int ctr=0;
    for(auto i : m){
        if(i.second%2!=0){
            ctr++;
        }
    }
    if(a[0]==a[a.length()-1]){
        cout<<"NO\n";
        return;
    }
    int open = m[a[0]];
    int close = m[a[a.length()-1]];
    
    int ma = max(m['A'],max(m['B'],m['c']));
    int sum = m['A']+m['B']+m['C'];
    if(sum-ma==0){
        cout<<"YES\n";
        return;
    }
    if(ctr>2){
        cout<<"NO\n";
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