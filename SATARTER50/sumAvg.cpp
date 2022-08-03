#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin>>t;
  while(t--){
      int q;
      cin>>q;
      
      cout<<q-1<<" ";
      if(q<=4) for(int i=1;i<=q-2;i++) cout<<i<<" ";
      else {
          cout<<q-2<<" ";
          for(int i=1;i<=q-4;i++) cout<<i<<" ";
          cout<<q-3<<" ";
      }
      cout<<q<<endl;
  }
  return 0;
}