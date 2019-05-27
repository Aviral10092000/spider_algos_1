#include <bits/stdc++.h>
using namespace std;
int m = 0,n = 0;
int b[5][6] = {0},a[6] = {0};
void function_return_option(int z)
{
	int count = 0;
	int j = z;
			while(!(z%2))
			{
				count++;
				z = z/2;
			}
			z = j;
			if(count==1)
			m = 10;
			else if(count==3)
			m = 8;
			else if(count==4)
			{
				if(!(z%5))
				{
					m = 8;
					n = 10;
				}
				else
				m = 16;
			}
			else if(count==5)
			{
				m = 16;
				n = 10;
			}
			else if(count>5)
			{
				m = 16;
				n = 8;
			}
			if(!(z%3))
			{
				if(m)
				n = 9;
				else
				m = 9;
			}
			if(!(z%7))
			{
				if(m)
				n = 7;
				else
				m = 7;
			}
			if(!(z%43))
			{
				if(m)
				n = 43;
				else
				m = 43;
			}
}
int main()
{
	//{9,43,10,16,7,8};
	for(int i = 0;i<5;i++)
	for(int j = 0;j<6;j++)	b[i][j] = -1;
	int o = 4;
	
	while(o--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		function_return_option(z);
		label:
		if(x==b[1][x])
		{
			if(m==b[3][x])
			{
				a[x] = m;
				a[b[2][x]] = b[4][x];
				a[y] = n;
			}
			else if(n==b[3][x])
			{
				a[x] = n;
				a[b[2][x]] = b[4][x];
				a[y] = m;
			}
			else if(m==b[4][x])
			{
				a[x] = m;
				a[b[2][x]] = b[3][x];
				a[y] = n;
			}
			else if(n==b[4][x])
			{
				a[x] = n;
				a[b[2][x]] = b[3][x];
				a[y] = m;
			}
		}
		else if(x==b[2][x])
		{
			if(m==b[3][x])
			{
				a[x] = m;
				a[b[1][x]] = b[4][x];
				a[y] = n;
			}
			else if(n==b[3][x])
			{
				a[x] = n;
				a[b[1][x]] = b[4][x];
				a[y] = m;
			}
			else if(m==b[4][x])
			{
				a[x] = m;
				a[b[1][x]] = b[3][x];
				a[y] = n;
			}
			else if(n==b[4][x])
			{
				a[x] = n;
				a[b[1][x]] = b[3][x];
				a[y] = m;
			}
		}
		if(y==b[1][y])
		{
			
			if(m==b[3][y])
			{
				a[y] = m;
				a[b[2][y]] = b[4][y];
				a[x] = n;
			}
			else if(n==b[3][y])
			{
				a[y] = n;
				a[b[2][y]] = b[4][y];
				a[x] = m;
			}
			else if(m==b[4][x])
			{
				a[y] = m;
				a[b[2][y]] = b[3][y];
				a[x] = n;
			}
			else if(n==b[4][x])
			{
				a[y] = n;
				a[b[2][y]] = b[3][y];
				a[x] = m;
			}
		}
		else if(y==b[2][y])
		{
			
			if(m==b[3][y])
			{
				a[y] = m;
				a[b[1][y]] = b[4][y];
				a[x] = n;
			}
			else if(n==b[3][y])
			{
				a[y] = n;
				a[b[1][y]] = b[4][y];
				a[x] = m;
			}
			else if(m==b[4][y])
			{
				a[y] = m;
				a[b[1][y]] = b[3][y];
				a[x] = n;
			}
			else if(n==b[4][y])
			{
				a[y] = n;
				a[b[1][y]] = b[3][y];
				a[x] = m;
			}
		}
		else 
		{
			b[0][x] = 1;
			b[1][x] = x;
			b[2][x] = y;
			b[3][x] = m;
			b[4][x] = n;
			b[0][y] = 1;
			b[1][y] = y;
			b[2][y] = x;
			b[3][y] = n;
			b[4][y] = m;	
		}
		m = 0;
		n = 0;
	}
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	}
}
