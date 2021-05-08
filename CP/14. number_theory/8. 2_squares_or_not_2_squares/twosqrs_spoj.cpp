#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll ar[10000001L];

void sq(){
    for(ll i = 0;i<=10000001L;i++)
        ar[i]=i*i;
}

int main(){
    sq();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll i = 0,j = sqrt(n);
        while(i<=j){
            if(ar[i]+ar[j]==n)
                break;
            if(ar[i]+ar[j]<n)
                i++;
            else
                j--;
        }
        if(i<=j)
            cout<<"Yes"<<endl;
        else    
            cout<<"No"<<endl;
    }
    return 0;
}
