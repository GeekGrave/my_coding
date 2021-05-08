#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ctrlower=0,ctrupper=0;
    for(int i=0;i<s.length();i++){
        if(islower(s[i])){
            ctrlower++;
        }
        else{
            ctrupper++;
        }
    }
    if(ctrupper>ctrlower){
        transform(s.begin(), s.end(), s.begin(), ::toupper); 
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
    }
    cout<<s;
    return 0;
}