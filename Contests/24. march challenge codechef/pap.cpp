#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define ld long double
const int mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;

    ll arr[n+1];

    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }

    int ans=0;
    bool flag=0;

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = n; j >i; j--)
        {
            ld m = (ld)(arr[j]-arr[i])/(j-i);
            flag=0;
            for (ll k = i+1; k <j; k++)
            {
                ld intr=(ld)m*(k-i)+arr[i];  
                if((ld)arr[k]>intr){
                    flag=1;
                    break;
                }
            }
                if(flag==1){
                    continue;
                }
                else{
                    ans=max(j-i,ans);
                }
        }
        
    }
    
    cout<<ans<<endl;
}

int main(){
    boost

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}