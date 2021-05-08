#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int i=0,j=n-1,f=0;
    while(i<=j){
        int mid = (i+j)/2;
        if(ar[mid]==m){
            f=1;
            cout<<"found at "<<mid<<endl;
            break;
        }
        if(m>ar[mid]){
            i=mid+1;
        }
        if(m<ar[mid]){
            j=mid-1;
        }
    }

    if(f==0)
        cout<<"not found"<<endl;
    return 0;
}