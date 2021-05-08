#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin.ignore();
        cin>>s1;
        cin.ignore();
        cin>>s2;
        cin.ignore();
        int r=0,b=0,e=0;
        for(int i=0;i<n;i++){
            if(s1[i]>s2[i]){
                r++;
            }
            else if(s2[i]>s1[i]){
                b++;
            }
            else{
                e++;
            }
        }
        if(r>b){
            r+=e;
        }
        if(b>r){
            b+=e;
        }
        if(r>b)
            cout<<"RED"<<endl;
        if(b>r)
            cout<<"BLUE"<<endl;
        if(b==r)
            cout<<"EQUAL"<<endl;
    
    }

    return 0;
}