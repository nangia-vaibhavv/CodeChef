#include <iostream>
using namespace std;

int main() {
int t;
    cin >> t;
    while (t--)
    {
       int a,b,c;
       cin>>a>>b>>c;
       int p=min(a,b);
       int q=min(b,c);
       int r=min(c,a);
       if(p==q && q==r && r==p)
       {
           cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
    }
    return 0;
}
