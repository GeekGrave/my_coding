#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        int s1=0,s2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s1=s1+a[i];
        }
        sort(a,a+n);
        for(int i=0;i<m;i++){
            cin>>b[i];
            s2=s2+b[i];
        }
        sort(b,b+m);

        if(s1>s2){
            cout<<"0\n";
            continue;
        }
        int ctr=m-1,i;
        for(i=0;i<n;i++){
            if(a[i]<b[ctr] && ctr>=0){
                s1=s1+(b[ctr]-a[i]);
                s2=s2-(b[ctr]-a[i]);
                ctr--;
                if(s1>s2)
                    break;
            } 
            else if(a[i]>=b[ctr]){
                break;
            }
        }

        if(s1>s2){
            cout<<i+1<<"\n";
        } else{
            cout<<"-1"<<"\n";
        }

    }
}