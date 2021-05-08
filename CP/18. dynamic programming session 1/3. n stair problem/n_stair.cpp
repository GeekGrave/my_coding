#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n;
int solve(int i,int *ar){
    // cout<<i<<endl;
    if(i==n-1){
        return 0;
    }
    if(i>n){
        return 0;
    }
    if(i==n){
        return 1;
    }
    if(ar[i]!=-1){
        return ar[i];
    }
    int ans = solve(i+2,ar) + solve(i+3,ar) + solve(i+5,ar);

    ar[i] = ans;

    return ans;
}
int main(){
    cin>>n;

    int ar[n+1];
    memset(ar,-1,sizeof(ar));

    cout<<solve(0,ar);
    return 0;
}