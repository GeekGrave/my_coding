#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;
        map<int,int> m;
        for(int i=0;i<str.length();i++){
            m[str[i]]++;
        }
        int c=0;
        for(auto i:m){
            if(i.second%2==1){
                c++;
            }
        }
        if((c)<=(str.length()-c)/2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}