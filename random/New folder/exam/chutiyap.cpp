#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int solve(int n){
   return  n%2 + 10*solve(n/2);
}
int main(){
 
    solve(10);
    return 0;
}