#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    ll t; 
    cin >> t;
    while(t--){
        ll n; 
        cin >> n;
        set<ll> s;
        while(n--){
            ll x; 
            cin >> x;
            if(s.count(x)) 
                s.insert(x+1);
            else 
                s.insert(x);
        }
        cout << s.size() << "\n";
    }
}