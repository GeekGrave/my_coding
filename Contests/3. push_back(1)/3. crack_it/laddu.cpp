#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans = k*ceil(n/2.0);
        cout<<ans<<endl;
    }
    return 0;
}