#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll l=s.length();
        ll ctr=0;
        
        for(ll i=0;i < (1<<l) ;i++){
            string str="";
            for(ll j=0;j<l;j++){
                ll y = 1<<j;
                if((i&y) != 0)
                    str+=s[j];
            }
            string ss=str;
            reverse(ss.begin(),ss.end());
            if(str.compare(ss)==0)
                ctr++;
        }
        cout<<ctr<<endl;
    }
    return 0;
}