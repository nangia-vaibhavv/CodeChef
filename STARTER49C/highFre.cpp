#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	       cin>>a[i];
	    }
	    int b[n]={0};
	    for(int i=0;i<n;i++)
	    {
	        b[a[i]-1]++;
	    }
	   sort(b,b+n);

	   int max1=0;int max2=0;
	        max1=b[n-1];
	       //if(b[n-2])
	       //{
	       //     max2=b[n-2];
	       //}
	       //cout<<max((max1+1)/2,max2)<<endl;
	       if(max1==b[n-2])
	       {
	           cout<<max1<<endl;
	       }
	       else if(b[n-2]>((max1+1)/2))
	       {
	           cout<<b[n-2]<<endl;
	       }
	       else cout<<(max1+1)/2<<endl;
	}
	
	return 0;
}
