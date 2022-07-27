#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    string a;
	   
	        cin>>a;
	    
	    int count0=0;
	    int count1=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]=='1')
	        {
	            count1++;
	        }
	        else if(a[i]=='0')
	        {
	            count0++;
	        }
	    }
	    double res=0;
	    res=abs(count0-count1);
	    cout<<ceil((double)(res/k)*1.00)<<endl;
	}
	return 0;
}
