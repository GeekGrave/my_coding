#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        int x=0,ar[n],i=0,j=n-1;
        while(i<=j){
            if(x%2==0)
                ar1[i++]=ar[x];
            else
            {
                ar1[j--]=ar[x];
            }
            x++;
        }
        for(int i=0;i<n;i++)
            cout<<ar1[i]<<" ";
        cout<<endl;
    }
    return 0;
}