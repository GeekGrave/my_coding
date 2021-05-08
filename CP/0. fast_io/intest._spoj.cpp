#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int64_t n,k,ctr=0;
    cin>>n>>k;
    int64_t ar[n];
    for(int64_t i=1;i<=n;i++){
        cin>>ar[i];
        if(ar[i]%k==0)  
            ctr++;
    }
    cout<<ctr<<"\n";
    return 0;

}