#include<iostream>
#include<vector>
using namespace std;


void subsets(ll ar[],ll n){
    ll s=0,x=1;
    for(ll i=0;i<(1<<n);i++){
        for(ll j=0;j<n;j++){
            if(i & (1<<j)){
                x=x*ar[j];
            }
        }
        s=s+x;
    }
    cout<<s<<endl;
}
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    subsets(a,n);
    return 0;
}
