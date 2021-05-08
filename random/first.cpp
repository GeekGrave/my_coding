#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll w,h,n;
        cin>>w>>h>>n;
        ll ctr=1;
        int f=0;
        while(h!=0 || w!=0){
            if(w%2==0 && h%2==0){
                h/=2;
                // w/=2;
                ctr*=2;
            }
            else if(w%2==0){
                w/=2;
                ctr*=2;
            }
            else if(h%2==0){
                h/=2;
                ctr*=2;
            }
            else{
                ctr=1;
                break;
            }
            if(ctr>=n){
                f=1;
                break;
            }
        }
        // cout<<ctr<<endl;
    //    / if(ctr=0)
    //         ctr=1;
        if(f==1){
            cout<<"YES\n";
            continue;
        }
        if(ctr<n){
            cout<<"NO\n";
            continue;
        }
        if(ctr>=n){
            cout<<"YES\n";
        }
    }
}