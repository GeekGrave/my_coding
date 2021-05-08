#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        vector<int> a;
        vector<int> b;
        a.push_back(ar[n-1]);
        b.push_back(ar[n-2]);
        int s1=ar[n-1],s2=ar[n-2],ctr=2;
        for(int i=n-3;i>=0;){
            if(s1<k){
                s1+=ar[i];
                a.push_back(ar[i]);
                i--;
                ctr++;
            }
            if(i<0){
                break;
            }
            if(s2<k){
                s2+=ar[i];
                b.push_back(ar[i]);
                ctr++;
                i--;
            }
            if(s1>=k && s2>=k){
                break;
            }
        }
        // cout<<a.size()<<" "<<b.size()<<endl;
        if(s1>=k && s2>=k){
            
            ll x=a.size()-1;
            int str=ctr;
            for(int i=b.size()-1;i>=0;i--){
                ll sum=0;
               for(int j=0;j<i;j++){
                   sum+=b[j];
               }
               sum+=a[x];
               s1-=a[x];
               s1+=b[i];
               if(sum>=k && s1>=k){
                   str=ctr-(b.size()-i);
               }
            
                   s1+=a[x];
                    s1-=b[i];

               
            //    x--;
            }
            if(str!=ctr)
                str++;
            cout<<str<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}