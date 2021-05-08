#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int w[n];
        int l[n];
        map<int,int> m;
        map<int,int> m1;
        for(int i=0;i<n;i++){
            cin>>w[i];
            m[w[i]]=i;
            
        }
        for(int i=0;i<n;i++){
            cin>>l[i];
            m1[w[i]]=l[i];
        }
        int ctr=0;
        for(int i=2;i<=n;i++){
            while(m[i]<=m[i-1]){
                m[i]+=m1[i];
                ctr++;
            }
        }
        cout<<ctr<<endl;
    }
    return 0;
}