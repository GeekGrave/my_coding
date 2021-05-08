#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    // ll t;
    // cin t;
    // while(t--){
        ll n;
        cin>>n;
        int ans;
        for(int i=1;i<=10;i++){
            if(n%i==0){
                ans=i;
            }
        }
        cout<<ans<<endl;
    // }
}