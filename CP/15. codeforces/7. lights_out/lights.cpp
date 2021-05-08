#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>ar[i][j];
        }
    }
    int ar1[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            ar1[i][j]=1;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(ar[i][j]%2!=0){
                ar1[i][j]=!ar1[i][j];
                ar1[i+1][j]=!ar1[i+1][j];
                ar1[i-1][j]=!ar1[i-1][j];
                ar1[i][j+1]=!ar1[i][j+1];
                ar1[i][j-1]=!ar1[i][j-1];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ar1[i][j];
        }
        cout<<endl;
    }
    return 0;
}