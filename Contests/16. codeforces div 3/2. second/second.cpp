#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll ar[n];
        int c0,c1,c2;
        map<int,int> m;
        map<int,int> m1;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]%3==0){
                c0++;
                m[0]++;
            }
            if(ar[i]%3==1){
                c1++;
                m[1]++;
            }
            if(ar[i]%3==2){
                c2++;
                m[2]++;
            }
        }
        if(m[0]==m[1] && m[1]==m[2] && m[0] == m[2]){
            cout<<0<<endl;
            continue;
        }
        else{
            int avg = n/3;
            for(int i=0;i<3;i++){
                m1[i]=m[i]-avg;
            }
            int ctr=0;
            for(int i=0;i<3;i++){
                if(m1[i]<0){
                    for(int j=0;j<3;j++){
                        if(i==j){
                            continue;
                        }
                        while(m1[i]<0 && m1[j]>0){
                            m1[j]--;
                            m1[i]++;
                            if((j-i)==1){
                                ctr+=2;
                            }
                            else if((j-i)==2){
                                ctr++;
                            }
                            else if((j-i)==-1){
                                ctr++;
                            }
                            else if((j-i)==-2){
                                ctr+=2;
                            }
                        }
                    }
                }
            }
            cout<<ctr<<endl;
        }
        
    }
    return 0;
}