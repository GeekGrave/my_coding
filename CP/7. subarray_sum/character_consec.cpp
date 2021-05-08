#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length()-1;
    // cout<<n;
    // cout<<s.length();
    string s2="";
    s2.push_back(s[0]);
    int x=1;
    // int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]!=s[i+1]){
            s2.push_back(s[i+1]);
        }
    }
    cout<<s2;
    return 0;
}