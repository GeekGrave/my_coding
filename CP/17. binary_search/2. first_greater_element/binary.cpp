#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,v;
    cin>>n>>v;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=n-1;
    while(j-i>1){
        int mid = (i+j)/2;
        if(a[mid]<v){
            i=mid+1;
        }
        else if(a[mid]>=v){
            j=mid;
        }
    }
    if(a[i]>=v){
        cout<<i;
    }
    else if(a[j]>=v){
        cout<<j;
    }
    else
    {
        cout<<v;
    }
}