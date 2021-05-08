#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int max=ar[0];
    int min=ar[0];
    int ctrm=0;
    for(int i=0;i<n-1;i++){
        if(ar[i+1]>max){
            ctrm++;
            max=ar[i+1];
        }
        if(ar[i+1]<min){
            ctrm++;
            min=ar[i+1];
        }
    }
    cout<<ctrm<<endl;
}