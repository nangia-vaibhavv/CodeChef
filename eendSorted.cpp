#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1)x=i;
        if(v[i]==n)y=i;
    }
    if(x<y)
    {
    cout<<(n-1-y)+(x)<<endl;
    }
    else cout<<(n-1-y)+(x)-1<<endl;
    }
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   solve();
	}
	return 0;
}
