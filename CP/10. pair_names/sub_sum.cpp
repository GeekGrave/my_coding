#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int n;
int ar[1000006];
int m=INT_MIN;
void sub_sum(int idx,vector<int>v){
    if(idx==n){
        int s=0;
        for(int i=0;i<v.size();i++){
            s+=v[i];
        }
        if(s>m)
            m=s;
        return;
    }
    sub_sum(idx+1,v);
    v.push_back(ar[idx]);
    sub_sum(idx+1,v);

}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    vector<int>v;
    sub_sum(0,v);
    cout<<m;
    return 0;
}