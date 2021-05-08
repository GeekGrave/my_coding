#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        string s[n];
        int f=0,x=0;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            if(s[i]=="start" || s[i]=="restart"){
                f=1;
            }
            if(s[i]=="stop"){
                if(f==0){
                    cout<<404<<endl;
                    x=2;
                    break;
                }
                else{
                    f=0;
                }
            }
        }
        if(x==2){
            continue;
        }
        else{
            cout<<200<<endl;
        }

    }
    return 0;
}