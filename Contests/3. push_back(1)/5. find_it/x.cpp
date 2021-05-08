#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int x=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            x=x^ar[i];
        }
        cout<<x<<endl;
    }
    return 0;
}