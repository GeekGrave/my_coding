#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    string s1,s2;
    cin.ignore();
    cin>>s1;
    cin.ignore();
    cin>>s2;
    ll k;
    cin>>k;
    ll sum=0,sum2=0;
    for(int i=0;i<s1.length();i++){
        sum+=s1[i];
        sum2+=s2[i];
        if(abs(s1[i]-s2[i])>k){
            cout<<"LOSE\n";
            return;
        }
    }
    if(sum==sum2){
        cout<<"WIN\n";
    }
    else{
        cout<<"LOSE\n";
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