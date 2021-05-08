#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[5][5],i,j,f=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>ar[i][j];
            if(ar[i][j]==1){
                f=1;
                break;
            }
        }
        if(f==1)
            break;
    }
    int s=abs(j-2)+abs(i-2);
    cout<<s<<endl;
    return 0;
}