#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1="";
    for(int i=0;i<s.length();i++){
        s1=s1+s[i];
        if(s1[0]=='.'){
            cout<<0;
            s1="";
        }
        else if(s1[0]=='-' && s1[1]=='.'){
            cout<<1;
            s1="";
        }
        else if(s1[0]=='-'&& s1[1]=='-'){
            cout<<2;
            s1="";
        }
    }
    return 0;
}