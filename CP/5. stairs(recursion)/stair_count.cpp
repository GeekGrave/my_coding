#include<iostream>
using namespace std;

int n;
int a[100];
int stair(int step){
    
    if(a[step]!=0){
        return a[step];
    }
    if(step>n){
        return 0;
    }
    if(step==n){
        return 1;
    }
    int ans = stair(step+2)+stair(step+3)+stair(step+5);
    a[step]=ans;
    return ans;
}

int main(){
    cin>>n;    
    cout<<stair(0);
}