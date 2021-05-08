#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        
        for(int i=0;i<n;i+=4){
            string str = s.substr(i,i+4);
            int lo=97,hi=112,mid,j=0;
            while(lo<=hi && j<4){
                mid = (lo+hi)/2;
                if(str[j]=='0'){
                    hi=mid;
                }
                else{
                    lo=mid+1;
                }
                j++;
            }
            if(str[j]=='1'){
                cout<<(char)hi;
            }
            else{
                cout<<(char)lo;
            }
        }
        // cout<<char(0);
        cout<<endl;
    }
}