#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i< (1<<n); i++){
        for(int j=0;j<n;j++){
            int y=1<<j;
            if((i&y)!=0)
                cout<<ar[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}