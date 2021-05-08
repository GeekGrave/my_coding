#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,m;
    cin>>n>>m;
    string s[n];
    cin.ignore();
    vector<pair<int,int> > v1,v2;
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]=='1'){
                v1.push_back({i,j});
                v2.push_back({j,i});
            }
        }
    }
    sort(v1.begin(),v1.end());
    int r1 = v1[0].first;
    int r2 = v1[v1.size()-1].first;
    sort(v2.begin(),v2.end());
    int c1 = v2[0].first;
    int c2 = v2[v2.size()-1].first;
    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
            if(s[i][j]=='0'){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";  
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}