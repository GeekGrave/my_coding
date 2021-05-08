#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        int f=0;
        for(int i=0;i< (1<<n) ;i++){
            int s=0;
            for(int j=0;j< n;j++){
                if(i & (1<<j)){
                    s=s+ar[j];
                }
            }
            if(s==m){
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}