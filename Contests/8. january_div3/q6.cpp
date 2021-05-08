#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        ll n,m;
        cin>>n>>m;
        ll ar[m];
        for(ll j = 0;j<m;j++){
            cin>>ar[j];
        }
        ll ne=0,p=0;
        for(ll j = 0;j<m;j++){
            if(ar[j]>0){
                p++;
            }
            if(ar[j]<0){
                ne++;
            }
        }
        ll ans=ne*p;
        cout<<ans<<"\n";
    }
}