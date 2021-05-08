#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int ctr1=0;
        for(int i=0;i<n-1;i++){
            int a = max(ar[i],ar[i+1]);
            int b = min(ar[i],ar[i+1]);
            int ctr=-1;
            if(a>(2*b)){
                while(b<a){
                    ctr++;
                    b*=2;
                }
                ctr1+=ctr;
            }
            
        }
        cout<<ctr1<<endl;
    }
    return 0;
}