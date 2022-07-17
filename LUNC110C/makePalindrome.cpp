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
	    string str;
	    cin>>str;
	    unordered_map<char,int>mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[str[i]]++;
	    }
	    for(auto it:mp)
	   //	for(int i=0;i<mp.size();i++)
	    {
	        if(it.second%2==0  )
	        {
	            cout<<"YES"<<endl;
	        }
	        else cout<<"NO"<<endl;
	    }
	}
	return 0;
}
