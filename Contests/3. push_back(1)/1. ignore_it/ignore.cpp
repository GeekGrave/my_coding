#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int out[n]={0};
        for(int i=0;i<n;i++){
            cin>>ar[i];
            out[ar[i]]=ar[i];
        }
        for(int i=0;i<n;i++){
            cout<<out[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}