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

    int cum[n];
    int maxSum=0;
    
    for(int i=0;i<n;i++){
        cum[i]=0;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cum[i]+=arr[j];
        }
    }

    
    int m=cum[0];
    for(int i=0;i<n;i++){
        int j=-1;
        int sum=0;
        while(j!=i){
            if(j==-1)
                sum=cum[i]-0;
            else{
                sum=cum[i]-cum[j];
            }
            j++;
            if(sum>m){
                m=sum;
            }
        }
    }
    cout<<m;
    return 0;
}