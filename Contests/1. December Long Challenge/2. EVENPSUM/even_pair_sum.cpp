#include<bits/stdc++.h>
#define lon long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        lon a,b;
        cin>>a>>b;
        lon eva,oda,evb,odb;
        if(a%2==0)
            eva=oda=a/2;
        else{
            eva=a/2;
            oda=a/2+1;
        }

        if(b%2==0)
            evb=odb=b/2;
        else{
            evb=b/2;
            odb=b/2+1;
        }

        lon ans = eva*evb + oda*odb;

        cout<<ans<<endl;
    }
    return 0;
}