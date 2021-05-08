#include<bits/stdc++.h>
using namespace std;
int phi[10004];

void etf(){
    phi[1]=1;
    for(int i=2;i<=10000;i++)
        phi[i]=i;
    for(int i=2;i<=10000;i++){
        if(phi[i]==i){
            for(int j=i;j<=10000;j+=i){
                phi[j]=phi[j]-(phi[j]/i);
            }
        }
    }
}

int main(){
    etf();
    int n;
    cin>>n;
    cout<<phi[n]<<endl;
    return 0;
}
