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
	    int totalTimeINMinutes=n*60;
	    cout<<totalTimeINMinutes/20<<endl;
	}
	return 0;
}
