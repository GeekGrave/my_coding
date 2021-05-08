#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sub = s.find("abc");
        while(sub!=string::npos){
            s.erase(sub,3);
            sub=s.find("abc");
        }
        cout<<s<<endl;
    }
    return 0;
}