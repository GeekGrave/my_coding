#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int v;
    cin>>v;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    map<int,int>m;

    for(int i=0;i<n;i++){
        m[a[i]]++;
    }

    int ans=0;
    map<int,int> :: iterator it1;
    map<int,int> :: iterator it2;

    for(it1=m.begin();it1!=m.end();it1++){
        for(it2=it1;it2!=m.end();it2++){
            if(it2==it1)
                continue;
            if((it1->first*it2->first)%x==v){
                ans = ans + (it1->second*it2->second);
            }
        }
    }

    cout<<ans;
    return 0;

}