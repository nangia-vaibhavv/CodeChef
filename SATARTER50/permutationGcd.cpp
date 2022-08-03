#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while (t--){
     int N,X;
     cin>>N>>X;
     if (X<N){
         cout<<-1<<endl;
         continue;
     }
     cout<<X-N+1<<" ";
     for (int i=1;i<=N;i++){
         if (i!= X-N+1   ){
             cout<<i<<" ";
         }
     }
     cout<<endl;
     
     
 }
 return 0;
}