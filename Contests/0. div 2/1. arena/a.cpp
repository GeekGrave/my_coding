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
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            m[ar[i]]++;
        }
        sort(ar,ar+n);
        int ctr=0;
        // map<int,int>::iterator i;
        // for(i=m.begin();i!=m.end();i++){
        //     if(next(i,1)==m.end()){
        //         break;
        //     }
        //     map<int,int> :: iterator it = next(i,1);
        //     if((it->first)>(i->first)){
        //         ctr+=i->second;
        //     }
        // }
        for(int i=1;i<n;i++){

            if(ar[i]==ar[i-1]){
                continue;
            }
            if(ar[i]>ar[i-1]){
                ctr+=m[ar[i]];
            }
        }
        cout<<ctr<<endl;
    }
    return 0;
}