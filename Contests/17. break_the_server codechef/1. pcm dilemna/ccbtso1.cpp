#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        map<char,int> m;
        for(int i=0;i<3;i++){
            m[s[i]]++;
        }
        if(m.size()==3){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}