#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> odd;
        vector<int> even;
        ll ar[n];
        for(ll i = 0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        for(ll i = 0;i<n;i++){
            // cin>>ar[i];
            if(ar[i]%2==0){
                even.push_back(i);
            }
            else{
                odd.push_back(i);
            }
        }
        sort(even.begin(), even.end(), greater<int>()); 
        sort(odd.begin(), odd.end(), greater<int>()); 
        for(int i=0;i<even.size();i++){
            cout<<even[i]<<" ";
        }
        // cout<<even.size()<< " \n";
        cout<<endl;
        for(int i=0;i<odd.size();i++){
            cout<<odd[i]<<" ";
        }
        // cout<<odd.size()<<" \n";
        cout<<endl;
        ll alice=0,bob=0;
        while(1){
            if(even.size()!=0){
                alice+=ar[even[0]];
                even.erase(even.begin()+0);
            }
            else if(odd.size()!=0){
                odd.erase(odd.begin()+0);
            }
            if(odd.size()!=0){
                bob+=ar[odd[0]];
                odd.erase(odd.begin()+0);
            }
            else if(even.size()!=0){
                even.erase(even.begin()+0);
            }
            if((even.size()==0) && (odd.size()==0))
                break;
        }
        cout<<alice<<" "<<bob<<endl;
        if(alice>bob){
            cout<<"Alice\n";
        }
        else if(bob>alice){
            cout<<"Bob\n";
        }
        else{
            cout<<"Tie\n";
        }
    }
}