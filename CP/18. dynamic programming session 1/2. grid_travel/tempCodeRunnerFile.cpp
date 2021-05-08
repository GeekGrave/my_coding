ll grid_travel(ll m,ll n, int ar[][1000]){
//     // are the args in the memo
//     // stringstream ss;
//     // stringstream ss2;
//     // string s1,s2;
//     // ss<<m;
//     // ss>>s1;
//     // ss2<<n;
//     // ss2>>s2;
//     // string key = s1 + "," + s2;
//     // cout<<key<<" "<<ar[key]<<endl;
//     if(m==1 && n==1){
//         return 1;
//     }
//     if(m==0 || n==0){
//         return 0;
//     }
//     if(ar[m][n]!=0){
//         return ar[m][n];
//     }
    
//     ar[m][n] = grid_travel(m-1,n,ar) + grid_travel(m,n-1,ar); 
//     // ar[key]++;
//     return ar[m][n];
// }