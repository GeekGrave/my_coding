#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int64_t ar[n];
    int64_t s=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        s=s^ar[i];
    }
    cout<<s<<endl;
    return 0;
}