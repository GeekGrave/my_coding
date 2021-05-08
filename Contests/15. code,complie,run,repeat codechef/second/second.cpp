#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll ceil(ll n){
    if(n%2==0){
        return n/2;
    }
    return n/2+1;
}

int main(){
	ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll ar[n],ctr=0,s=0;
        map<ll,ll> m;
        int f=1;
        for(ll i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]!=-1){
                ctr++;
                s+=ar[i];
            }
            m[i]=ar[i];
            if(ar[i]>k){
                f=0;
            }
        }
        if(ctr<ceil(n)){
            cout<<"Rejected\n";
            continue;
        }
        if(f==0){
            cout<<"Too Slow\n";
            continue;
        }
        int ctr1=0;
        for(auto i : m){
            if(i.second<=1 && i.second!=-1){
                ctr1++;
            }
        }
        if(ctr1==n){
            cout<<"Bot\n";
            continue;
        }
        cout<<"Accepted\n";
    }
}
