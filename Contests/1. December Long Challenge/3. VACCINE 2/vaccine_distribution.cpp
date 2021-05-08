#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int ar[n];
        int risk=0;
        int norisk=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]>=80 || ar[i]<=9)
                risk++;
            else
                norisk++;
        }
        int ctr1=risk/d;
        if(risk%2!=0)
            ctr1++;
        int ctr2=norisk/d;
        if(norisk%2!=0)
            ctr2++;
        cout<<ctr1+ctr2<<endl;

    }
    return 0;
}