#include<bits/stdc++.h>
using namespace std;
#define ll long long int

// ll lis(string s){
//     ll ar[s.length()];
//     ar[0]=1;
//     for(ll i=1;i<s.length();i++){
//         ar[i]=1;
//         for(ll j=0;j<i;j++){
//             if(s[i] >= s[j] && ar[i] < ar[j] + 1)
//                 ar[i] = ar[j] + 1;
//         }
//     }
//     return *max_element(ar,ar+s.length());
// }

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        // cout<<s.length() - lis(s)<<endl;
        ll zero=0,one=0;
        for(ll i=0;i<s.length();i++){
            if(s[i]=='0')
                zero++;
            else{
                one++;
            }
        }
        ll ans = min(zero,one);
        ll o=0;
        for(ll i=0;i<s.length();i++){
            if(s[i]=='1'){
                o++;
            }
            else{
                zero--;
            }
            ans = min(o+zero,ans);
        }
        cout<<ans<<endl;
    }
}