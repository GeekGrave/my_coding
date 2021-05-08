#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        cum=cum+arr[i];
        if(cum>maxSum){
            maxSum=cum;
        }
        if(cum<0){
            cum=0;
        }
    }
    cout<<maxSum;
    return 0;

}