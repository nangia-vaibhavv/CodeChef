#include<iostream>
using namespace std;
int main(){
    int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    string initial;
    string final;
    cin>>initial;
    cin>>final;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(initial[i]=='1')count++;
        if(final[i]=='1')count++;
        
    }
    if(count==1 || count%2!=0) cout<<"0"<<endl;
    if(count%2==0) cout<<"1"<<endl;
    
}
return 0;

}
