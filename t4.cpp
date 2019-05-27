#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,x,y;
	cin>>n>>r>>x>>y;
	string a,b;
	cin>>a;
	cin>>b;
	long long unsigned int sum = r;
	while(n--)
	{
		sum = sum + (a[n]=='1'&&b[n]=='1')*x - (a[n]=='1'&&b[n]=='0')*y;
	}
	if(sum>r)
	{
		cout<<"promoted\n";
	}
	else if(sum<r)
	{
		cout<<"demoted";
	}
	else
	{
		cout<<"no change";
	}
}
