#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s,p;
        cin.ignore();
        cin>>s;
        cin.ignore();
        cin>>p;
        cin.ignore();
        sort(s.begin(),s.end());
        sort(p.begin(),p.end());
        if(s==p)
            cout<<"Yes\n";
        else
            cout<<"No\n";
        
    }
}