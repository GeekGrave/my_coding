    #include<bits/stdc++.h>
    #define ll long long int
    using namespace std;

    int main(){
        ll t;
        cin>>t;
        while(t--){
            ll n,m;
            cin>>n>>m;
            ll ar1[n];
            ll ar2[m];
            for(ll i=0;i<n;i++){
                cin>>ar1[i];
            }
            for(ll i=0;i<m;i++){
                cin>>ar2[i];
            }
            // unordered_map<int,int> m;
            // m[0]++;
            // vector<int> v;
            map<ll,ll> mm;
            mm[0]++;
            int p=20;
            while(p--){
            for(auto j:mm){
                // int q=10;
                for(ll i=0;i<n;i++){
                    ll z=((j.first)|ar1[i]);
                    mm[z]++;
                    // q++;
                }
                for(ll i=0;i<m;i++){
                    ll z=((j.first)&ar2[i]);
                    mm[z]++;
                    // q++;
                }
                // if(q==10)
                //     break;
            }
            }
            // for(auto j:mm){
            //     // int q=10;
            //     for(ll i=0;i<m;i++){
            //         ll z=((j.first)&ar2[i]);
            //         mm[z]++;
            //         // q++;
            //     }
            //     for(ll i=0;i<n;i++){
            //         ll z=((j.first)|ar1[i]);
            //         mm[z]++;
            //         // q++;
            //     }
                
            //     // if(q==10)
            //     //     break;
            // }
            cout<<mm.size()<<endl;
            // for(auto i:mm){
            //     cout<<i.first<<endl;
            // }
        }
    }