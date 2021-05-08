#include<bits/stdc++.h>
using  namespace std;

int main(){
    int n;
    cin>>n;
    int k,l;
    // cout<<4;
    cin>>k>>l;
    int x=0;
    // cout<<x;
    for(int i=k;i<=l;i++){
        x=x |(1<<i);
    }
    // cout<<x;
    n=n|x;
    for(int i=1<<10;i>0;i/=2){
        (n&i) ? printf("1") : printf("0");
    }
}
