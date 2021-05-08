#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        string s[n];
        map<string,int> m;
        for(int i=0;i<n;i++){
            cin>>s[i];
            m[s[i]]++;
        }
        map<string,int> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==i){
                    continue;
                }
                string s1=s[j];
                s1[0]=s[i][0];
                v[s1]++;
            }
        }
        int ctr=0;
        for(auto i:v){
            if(m[i.first]==0){
                ctr++;
            }
        }
        cout<<ctr<<endl;
        
    }
    return 0;
}