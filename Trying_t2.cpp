#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	int length;
	cin>>length;
	length = 0;
	string a;
	cin>>a;
	int h = a.length();
	while(h!=1)
	{
		h = h/2;
		string x;
		x.append(a.begin(),a.begin() + h);
		string y;
		y.append(a.begin() + h,a.begin()+2*h);
		if(x.compare(y))
		{
			cout<<length;
			exit(0);		
		} 
		length++;
	}
	cout<<length;
	exit(0);
}
