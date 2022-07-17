#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int l,t,b;
	    int res=0,temp=0;
	    int totalTime=0;
	    cin>>l>>t>>b;
	    if(l<=3)
	    {
	        totalTime=l*t;
	    }
	    else{
	        res=l*t;
	        if(l%3==0){
	        temp=((l/3)-1)*b;
	        totalTime=res+temp;
	        }else{
	            temp=((l/3))*b;
	        totalTime=res+temp;
	        }
	    }
	    cout<<totalTime<<endl;
	}
	return 0;
}
