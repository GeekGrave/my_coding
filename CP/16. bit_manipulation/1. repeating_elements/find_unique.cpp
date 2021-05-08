//given an array (odd size). all numbers are repeating twice except one, find that number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    int x=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        x=x^ar[i];
    }
    cout<<x<<endl;
    return 0;
}