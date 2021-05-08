#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    float m,h;
    cin>>m>>h;
    float bmi = m/(h*h);
    if(bmi<=18){
        cout<<1<<endl;
    }
    else if(bmi<=24){
        cout<<2<<endl;
    }
    else if(bmi<=29){
        cout<<3<<endl;
    }
    else{
        cout<<4<<endl;
    }
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}