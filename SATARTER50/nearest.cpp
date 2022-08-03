#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int mid=(x+y)/2;
	    cout<< max(abs(x-mid),abs(y-mid))<<endl;
	}
	
	return 0;
}
