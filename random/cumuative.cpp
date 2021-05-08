#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int ar[10];
    for(int i=0;i<10;i++){
        ar[i]=i;
    }

    int sum=0,x=0,s=1,e=1,k=1,m,p=0;
    string str;
    for(int i=1;i<10;i++){  
        sum+=ar[i];
        while(sum>n){
            sum-=ar[k];
            k++;
        }
        if(sum==n){
            s=k;
            e=i;
            break;
        }
    }
    if(sum==n){
        for(int i=s;i<=e;i++)
            cout<<i<<" ";
        cout<<"\n";
    }
    else{
        cout<<-1<<endl;
    }
    }
}