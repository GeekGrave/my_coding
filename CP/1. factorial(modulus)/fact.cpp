#include<iostream>
using namespace std;

int m=100000007;
int fact(int n){
    if(n==0){
        return 1;
    }
    return ((n%m)*(fact(n-1))%m);
}

int main(){
    int n;
    cin>>n;
    int x = fact(n);
    cout<<x%m;
}