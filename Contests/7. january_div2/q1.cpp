#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll a[n],b[m],sa=0,sb=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sa+=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            sb+=b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        if(sa>sb){
            cout<<0<<endl;
            continue;
        }
        else{
            if(b[m-1]<a[0]){
                cout<<-1<<endl;
                continue;
            }
        }
        
        int ctr=0,f=0,j=0;
        for(int i=m-1;i>=0,j<n;i--){
            if(b[i]>a[j]){
                sa+=(b[i]-a[j]);
                sb-=(b[i]-a[j]);
                j++;
                if(sa>sb)
                    break;
            }
            else{
                break;
            }
        }

        if(sa>sb){
            cout<<j<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
}