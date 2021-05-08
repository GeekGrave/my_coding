#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<(n*(n+1)*(2*n+1))/6<<endl;
    }
    return 0;
}
