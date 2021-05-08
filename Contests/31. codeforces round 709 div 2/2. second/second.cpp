#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

// int f(ll m,ll *ar){
//     ll c = (m+ar[1]-ar[0])>m?ar[1]-ar[0]:(m+ar[1]-ar[0]);
//     if((c+ar[1])%m==ar[2]){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

void solve(){
    ll n;
    cin>>n;
    ll ar[n];
    ll maxx=-1;
    for(ll i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]>maxx){
            maxx=ar[i];
        }
    }
    int ctr=0;
    for(ll i=1;i<n;i++){
        if(ar[i-1]!=ar[i]){
            ctr=1;
        }
    }
    if(ctr==0){
        cout<<0<<endl;
        return;
    }
   
    if(n==1){
        cout<<0<<endl;
        return;
    }
    if(n==2){
        if(ar[1]>ar[0]){
            cout<<0<<endl;
        }
        else{
            cout<<ar[0]-ar[1]+ar[0]<<" "
        }
    }
    if(n==3){
        if(ar[1]-ar[0]==ar[2]-ar[1]){
            cout<<0<<endl;
            return;
        }
        else if(abs(ar[1]-ar[0])+abs(ar[2]-ar[1])>maxx){
            ll m = abs(ar[1]-ar[0])+abs(ar[2]-ar[1]);
            ll c = (m+ar[1]-ar[0])>m?ar[1]-ar[0]:(m+ar[1]-ar[0]);
            cout<<m<<" "<<c<<endl;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    ll m = abs(ar[1]-ar[2])+abs(ar[2]-ar[3]);
    if(m>maxx){
        ll c = (m+ar[1]-ar[0])>m?ar[1]-ar[0]:(m+ar[1]-ar[0]);
        cout<<m<<" "<<c<<endl;
        return;
    }
    else{
        cout<<-1<<endl;
    }

}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}