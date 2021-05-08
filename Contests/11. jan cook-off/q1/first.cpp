#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // if((s[0]>='A' && s[0]<='Z')  || (s[s.length()-1]>='A' && s[s.length()-1]<='Z') || s.length()<10 || isdigit(s[0]) || isdigit(s[s.length()-1]) || (s[o])){
        //     cout<<"NO\n";
        //     continue;
        // }
        //char set[5] = {'@','#','%','&','?'};
        if(s.length()<10){
            cout<<"NO\n";
            continue;
        }

        map<char,int> se;
        se['@']++;
        se['#']++;
        se['%']++;
        se['&']++;
        se['?']++;
        int l=0,d=0,u=0,see=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' and s[i]<='z'){
                l=1;
            }
            if(i>=1 and i<s.length()-1){
                if(isdigit(s[i])){
                    d++;
                }
                if((s[i]>='A' && s[i]<='Z')){
                    u++;
                }
                if(se.find(s[i])!=se.end()){
                    see++;
                }
            }
        }

        if(l!=0 && d!=0 && u!=0 && see!=0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
