#include<iostream>
#include<vector>
#include<limits.h>
#include<math.h>
using namespace std;

int n;
int ar[10];
int sum=0;
int m=99999;
void subsum(int idx, vector<int>v){
    
    if(idx==n){
        int s=0;
        for(int i=0;i<v.size();i++){
            s=s+v[i];
        }
        if(abs(s-(sum-s))<m)
            m=abs(s-(sum-s));
        return;
    }
    subsum(idx+1,v);
    v.push_back(ar[idx]);
    subsum(idx+1,v);
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum=sum+ar[i];
    }
    vector<int>v;
    subsum(0,v);
    cout<<m;
}