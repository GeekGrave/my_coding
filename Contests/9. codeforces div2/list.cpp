#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<pair<ll,ll> > ar;
        for(int i=0;i<n;i++){
            ll w;
            cin>>w;
            
            ar.push_back({w,1});
        }
        // ll s=0;
        
        
        for(int i=0;i<ar.size();i++){
            if((ar[i].first)%x==0){
                ll w=ar[i].first;
                // s+=w;
                // unordered_map<ll,ll> m;
                // while((w%x)!=1){
                    // ll z = x * (w/x);
                    // if(m[w]!=0){
                    //     z*=m[w];
                    // }
                for(int j=1;j<=ar[i].second;j++){
                    ll p=w/x;
                    ar.push_back({p,x});
                }
                    // s+=z;
                    // w/=x;
                // }
                // s+=w;
            }
            else{
                // s+=ar[i];
                break;
            }
        }
        ll s=0;
        for(int i=0;i<ar.size();i++){
            s+=(ar[i].first)*(ar[i].second);
        }
        cout<<s<<endl;

    }
}