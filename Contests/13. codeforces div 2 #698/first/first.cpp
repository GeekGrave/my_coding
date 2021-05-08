#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ar[n];
        map<int,int> m;
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            m[ar[i]]++;
            if(m[ar[i]]>max){
                max=m[ar[i]];
            }
        }
        cout<<max<<endl;

    }
}
