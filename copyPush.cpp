#include <iostream>
using namespace std;
bool solve( string str){
if(str.size() == 0 || str.size() == 1) return true;
if(str.size()%2 != 0){
return solve(str.substr(0,str.size() -1));
}
if(str.substr(0,str.size()/2) == str.substr(str.size()/2,str.size())){
return solve(str.substr(0,str.size()/2));
}
return false;
}
long long t,n;
int main() {
	// your code goes here
cin >> t;
while(t--){
cin >> n;
string str;
cin >> str;
if(n == 0 || n== 1){
cout << "YES" << endl;
continue;
}
bool op = solve(str);
if(op) cout << "YES" << endl;
else
cout<<"NO"<<endl; }return 0;
}
