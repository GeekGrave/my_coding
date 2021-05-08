#include<bits/stdc++.h> 
using namespace std; 
  
int main(){
    int64_t n;
    cin>>n;
    int64_t arr[n];
    for(int64_t i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int64_t sum = 0; 
    for (int64_t i=n-1; i>=0; i--) 
        sum += i*arr[i] - (n-1-i)*arr[i]; 
    cout<<sum<<endl;
    return 0;
} 
  
