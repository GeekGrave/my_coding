#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> ar;
    unordered_map<int,int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ar.push_back(x);
        v[i]=i+1;
    }
    int j=0,i;
    for(i=0;i<n+j;i++){
        if(ar[i]-m<=0){
            continue;
        }
        else{
            ar[i]-=m;
            ar.push_back(ar[i]);
            j++;
            v[n+j-1]=v[i];
        }
    }
    cout<<v[i-1]<<endl;
    return 0;
}

