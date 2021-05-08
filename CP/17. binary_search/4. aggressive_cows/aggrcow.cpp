#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll canPee(ll ,ll , ll * ,ll );
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){

        ll n,m;
        cin>>n>>m;
        ll ar[n];
        for(ll i = 0;i<n;i++){
            cin>>ar[i];
        }   
        sort(ar,ar+n);
        ll lo = 1, hi = ar[n-1]-1,ans;
        while(lo<=hi){
            ll mid = (hi+lo)/2;
            if(canPee(mid,n,ar,m)){
                ans=mid;
                lo = mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}

ll canPee(ll mid, ll n, ll *ar,ll m){
    ll man = 1;
    ll last=ar[0];
    for(ll i=0;i<n;i++){
        if(ar[i]-last >= mid){
            man++;
            last = ar[i];
        }
        if(man==m)
            return true;
    }
    return false;
}