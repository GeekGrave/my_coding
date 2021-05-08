#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin.ignore();
    cin>>s2;
    string s3="";
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i])
            s3+="1";
        else
        {
            s3+="0";
        }
    }
    cout<<s3<<endl;
}