#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        int ctr=0;
        for(int i=0;i<n;i++){
            if(s[i]!=')')
                break;
            ctr++;
        }
        if(ctr>(s.length()-ctr))
            cout<<"Yes"<<endl;
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}