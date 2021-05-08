#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n;
    cin>>n;
    int ctr=0;
    while(n){
        int d=n%10;
        if(d==4 || d==7)
            ctr++;
        n=n/10;
    }
    if(ctr==4 || ctr==7)
        cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
    
}