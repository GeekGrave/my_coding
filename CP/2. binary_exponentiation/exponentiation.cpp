#include<iostream>
using namespace std;

int exp(int n, int p){

    if(p==0)
        return 1;
    if(p==1)
        return n;
    
    int ans;
    if(p%2==0){
        ans = exp(n,p/2);
        ans=ans*ans;
    }

    else{
        ans = exp(n,(p-1)/2);
        ans=ans*ans*n;
    }
    return ans;
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<exp(n,p);
}