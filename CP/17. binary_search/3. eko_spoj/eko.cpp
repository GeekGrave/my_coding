#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
ll search(ll , ll *);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll m;
    cin>>n>>m;
    ll ar[n];
    ll ma=INT_MIN;
    for(ll i = 0;i<n;i++){
        cin>>ar[i];
        ma = max(ar[i],ma);
    }
    ll lo = 0;
    ll hi = ma;
    while(hi - lo >1){
        ll mid = (hi+lo)/2;
        if(search(mid,ar)>=m){
            lo=mid;
        }
        else
        {
            hi = mid-1;
        }
    }
    if(search(hi,ar)>=m){
        cout<<hi;
    }
    else if(search(lo,ar)>=m){
        cout<<lo;
    }
}

ll search(ll mid, ll *ar){
    ll s=0;
    for(ll i = 0;i<n;i++){
        if(ar[i]>mid)
            s+=(ar[i]-mid);
    }
    return s;
}