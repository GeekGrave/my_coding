//asked in Amazon, Oracle.
#include<iostream>
#include<climits>

using namespace std;

int main(){
//     int t;
//     cin>>t;

// while(t!=0){
    
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    const int N = 1e5+2;
    int idx[N];

    for(int i=0;i<n;i++){
        idx[i]=-1;
    }

    int minidx=INT_MAX;

    for(int i=0;i<n;i++){
        if(idx[arr[i]]!=-1){
            minidx=min(minidx,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }

    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }

    else{
        cout<<minidx+1<<endl;
    }
// t--;
// }

    return 0;
}