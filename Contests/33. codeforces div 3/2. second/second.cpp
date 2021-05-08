#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin.ignore();
    cin>>s;
    int pos1,pos2;
    int ctr=0;
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            pos1=i;
            ctr++;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='*'){
            pos2=i;
            ctr++;
            break;
        }
    }
    if(pos1==pos2){
        cout<<1<<endl;
        return;
    }

    vector<int> ar;
    ar.pb(pos1);
    int x=0;
    for(int i=pos1+1;i<pos2;i++){
        if(s[i]=='*'){
            ar.pb(i);
        }
    }
    ar.pb(pos2);
    // int l = pos1;
    for(int i=1;i<ar.size();i++){
        if(ar[i]-pos1>k){
            if(ar[i-1]!=pos1){
                pos1=ar[i-1];
            }
            else{
                pos1=ar[i];
            }
            ctr++;
        }
    }
    cout<<ctr<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}