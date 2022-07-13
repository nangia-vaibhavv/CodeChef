#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int coinRequired=n%10;
	    cout<<coinRequired<<endl;
	}
	return 0;
}
