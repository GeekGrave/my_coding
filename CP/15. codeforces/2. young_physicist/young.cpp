#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>ar[i][j];
        }
    }
    int f=0;
    for(int i=0;i<3;i++){
        int s=0;
        for(int j=0;j<n;j++){
            s=s+ar[j][i];
        }
        if(s!=0){
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}
