#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s;
    cin>>s;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int sum=0;
    int x=0,i=0;

    while(i<n && sum+ar[i]<=s){
        sum=sum+ar[i];
        i++;
    }

    if(sum==s){
        cout<<x+1<<i<<endl;
        return 0;
    }

    while(i<n){
        sum=sum+ar[i];
        while(sum>s){
            sum=sum-ar[x++];
        }
        if(sum==s){
            cout<<x+1<<" "<<i+1;
            break;
        }
        i++;
    }

    return 0;
}