#include<bits/stdc++.h>
using namespace std;

int64_t cubeno[1001001L];

void cubefr(){
    cubeno[1]=1;
    for(int64_t i = 2;i<1000;i++){
        if(cubeno[i]!=-1){
                for(int64_t j=i*i*i;j<=100000;j+=i*i*i){
                    cubeno[j]=-1;
                }
        }
    }
    cubeno[1]=1;
    int ctr=2;
    for(int64_t i = 2;i<=1000001L;i++){
        if(cubeno[i]!=-1)
            cubeno[i]=ctr++;
    }
}

int main(){
    int64_t t;
    cubefr();
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        if(cubeno[n]!=-1)   
            cout<<"Case "<<i<<": "<<cubeno[n]<<endl;
        else
            cout<<"Case "<<i<<": "<<"Not Cube Free"<<endl;
    }
    return 0;
}