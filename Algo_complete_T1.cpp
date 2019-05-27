#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int x;
	cin>>x;
	string h;
	cin>>h;
	int sum = 0;
	for(int i=x-1;i>=0;i--)
	{
		sum = sum + (h[i]-'0')*pow(2,x-1-i);
	}
	if(sum>pow(2,x-1)&&sum<pow(2,x)-1)
	{
		int a = sum+1;
		int b = sum-1;
		string y;
		while(a>0)
		{
			y.push_back(a%2 + '0');
			a = a/2;
		}
		y.push_back(' ');
		while(b>0)
		{
			y.push_back(b%2 + '0');
			b = b/2;
		}
		reverse(y.begin(),y.end());
		cout<<y;
	}
	else
	cout<<"-1\n";
}
