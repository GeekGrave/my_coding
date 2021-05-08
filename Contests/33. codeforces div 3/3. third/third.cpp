#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    string a,b;
    cin.ignore();
    cin>>a;
    cin.ignore();
    cin>>b;
    vector<pair<string,int> > v1,v2;

    for(int i=0;i<a.length();i++){
        for(int j=0;j<a.length();j++){
            string str = a.substr(i,j+1);
            v1.pb({str,str.length()});
        }
    }
    for(int i=0;i<b.length();i++){
        for(int j=0;j<b.length();j++){
            string str = b.substr(i,j+1);
            v2.pb({str,str.length()});
        }
    }
    int maxx=0;
    for(auto i : v1){
        for(auto j : v2){
            if(i.first == j.first){
                if(i.second>maxx){
                    maxx=i.second;
                }
            }
        }
    }
    if(maxx==0){
        cout<<a.length()+b.length()<<endl;
        return;
    }
    int ans=0;
    ans=a.length()-maxx + b.length()-maxx;
    cout<<ans<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}