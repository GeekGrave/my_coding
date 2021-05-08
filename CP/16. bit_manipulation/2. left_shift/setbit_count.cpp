#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ctr=0;
    cin>>n;
    while(n){
        ctr=ctr + (n&1);
        n=n>>1;
    }
    cout<<ctr<<endl;
    
}