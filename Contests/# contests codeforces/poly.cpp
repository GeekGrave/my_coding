#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int q=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='?')
                q++;
        }
        if(s[0]==')')
            cout<<"NO\n";
        else if(s[s.length()-1]=='(')
            cout<<"NO\n";
        else if(q%2==0)
            cout<<"YES\n";
        else if(q%2!=0)
            cout<<"NO\n";
    }
    return 0;
}