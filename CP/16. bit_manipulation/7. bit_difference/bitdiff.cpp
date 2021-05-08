#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int ans=0;
        for(int i=0;i<32;i++){
            int ctr=0;
            for(int j=0;j<n;j++){
                if((ar[j] & (1<<i)) != 0){
                    ctr++;
                }
            }
            ans+=ctr*(n-ctr)*2;
        }
        cout<<"Case "<<i<<": "<<ans%10000007<<endl;
    }
}