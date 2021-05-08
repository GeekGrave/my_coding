#include<iostream>
using namespace std;

int freq[1000006];
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<n;i++){
        if(ar[i]<0)
            continue;
        freq[ar[i]]++;
    }

    for(int i=0;i<1000006;i++){
        if(freq[i]==0){
            cout<<i;
            break;
        }
    }

    return 0;
}