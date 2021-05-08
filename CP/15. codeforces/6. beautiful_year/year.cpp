#include<bits/stdc++.h>
using namespace std;
//int ar[10];
int main(){
    int y;
    cin>>y;
    y++;
    while(1){
        int n=y,f=0;;
        int ar[10] = {0};
        while(n){
            int d = n%10;
            n=n/10;
            ar[d]++;
            if(ar[d]>1){
                f=1;
                break;
            }
        }
        if(f==1){
            y++;
            continue;
        }
        break;
    }
    cout<<y<<endl;
    return 0;
}