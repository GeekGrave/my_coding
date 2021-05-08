#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    if(n==1 && m==1){
        cout<<2+k<<endl;
        return;
    }
    ll mi = min(m,n);
    int a=0;
    ll ans=0;
    for(ll i=2;i<=(1+mi);i++){
        a++;
        if(a%2!=0){
            ans^=(k+i);
        }
    }
    ll i;
    int b=0;
    if(m==n){
        for(i=(m+n);i>(m+n-a+1);i--){
            b++;
            if(b%2!=0){
                ans^=(k+i);
            }
        }
    }
    else{
        for(i=(m+n);i>(m+n-a);i--){
            b++;
            if(b%2!=0){
                ans^=(k+i);
            }
        }
    }
    for(ll j=i;j>(mi+1);j--){
        if(a%2!=0){
            ans^=(k+j);
        }
    }
    cout<<ans<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}