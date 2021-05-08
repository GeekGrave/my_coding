#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if((s[0]>='A' && s[0]<='Z')  || (s[s.length()-1]>='A' && s[s.length()-1]<='Z') || s.length()<10){
            cout<<"NO\n";
            continue;
        }
        char set[5] = {'@','#','%','&','?'};
        int l=0,d=0,u=0,se=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                l++;
            }
            if(isdigit(s[i])){
                d++;
            }
            if((s[i]>='A' && s[i]<='Z')){
                u++;
            }
            for(int j=0;j<5;j++){
                if(s[i]==set[j]){
                    se++;
                }
            }
        }
        if(l!=0 && d!=0 && u!=0 && se!=0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
