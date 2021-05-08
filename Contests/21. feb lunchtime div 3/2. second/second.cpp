#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll ar[10];

    for(int i=0;i<10;i++){
        cin>>ar[i];
    }
    ll k;
    cin>>k;
    if(k==0){
        int y=10;
        for(int i=9;i>=0;i--){
            if(ar[i]!=0){
                break;
            }
            y--;    
        }
        cout<<y<<endl;
        return;
    }
    int i;
    int sum=0;
    for(i=9;i>=0;i--){
        sum+=ar[i];
        if(sum==k){
            break;
        }
        
    }
    cout<<i+1<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}