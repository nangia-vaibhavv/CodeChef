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
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int count=0;
	    int mx=0;
	    int maxFreq=0;
	    long long ans=0;
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[arr[i]]++;
	         mx=max(mx,arr[i]);

	    }
	    for(auto it:mp)
	    {
	         count+=(it.second==1);
	         maxFreq=max(maxFreq,it.second);
	    }
	    if(count&1)
	    {
	        if(mp[mx]==1 and maxFreq==2)ans++;
	        ans+=(count+1)/2;
	    }
	    else ans=count/2;
	    cout<<ans<<endl;
	   // cout<<count<<endl;
	}
	return 0;
}
