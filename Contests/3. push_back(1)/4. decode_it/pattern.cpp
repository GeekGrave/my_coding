#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        for(int i=1;i<=k;i++){
            for(int j=k;j>i;j--){
                cout<<" ";
            }
            char a='A';
            for(int w=1;w<=i;w++){
                if(i%2==1){
                    cout<<a;
                    a++;
                }
                else{
                    cout<<w;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}