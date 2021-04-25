#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int a, b;
		cin>>a>>b;
		
		string str;
		
		cin>>str;
		
		int n = str.length();
		
		for(int i=0;i<n;i++)
		{
			if(str[i] == '0')
				a--;
			else if(str[i] == '1')
				b--;
		}
		
		if(a < 0 || b < 0)
		{
			cout<<-1<<"\n";
			continue;
		}
		
		int s = 0, e = n-1;
		
		bool flag = true;
		
		while(s<e)
		{
			if(str[s] == '?' && str[e] != '?')
			{
				if(str[e] == '1')
				{
					if(b < 1)
					{
						flag = false;
						break;
					}
					else
					{
						str[s] = '1';
						b--;
					}
				}
				else
				{
					if(a < 1)
					{
						flag = false;
						break;
					}
					else
					{
						str[s] = '0';
						a--;
					}
				}
			}
			else if(str[s] != '?' && str[e] == '?')
			{
				if(str[s] == '1')
				{
					if(b < 1)
					{
						flag = false;
						break;
					}
					else
					{
						str[e] = '1';
						b--;
					}
				}
				else
				{
					if(a < 1)
					{
						flag = false;
						break;
					}
					else
					{
						str[e] = '0';
						a--;
					}
				}
			}
			s++;
			e--;
		}
		
		if(flag == false)
		{
			cout<<-1<<"\n";
			continue;
		}
		
		s = 0, e = n-1;
		
		while(s<e)
		{
			if(str[s] != str[e])
			{
				flag = false;
				break;
			}
			
			if(str[s] == '?')
			{
				if(a >= 2)
				{
					str[s] = str[e] = '0';
					a -= 2;
				}
				else if(b >= 2)
				{
					str[s] = str[e] = '1';
					b -= 2;
				}
				else
				{
					flag = false;
					break;
				}
			}
			
			s++;
			e--;
		}
		
		if(flag == false)
		{
			cout<<-1<<"\n";
			continue;
		}
		
		if(s == e && str[s] == '?' && flag)
		{
			if(a != 0)
			{
				str[s] = '0';
			}
			else if(b != 0)
			{
				str[s] = '1';
			}
			else
			{
				flag = false;
			}
		}
		
		if(flag)
			cout<<str;
		else
			cout<<-1;
			
		cout<<"\n";
	}
	
	return 0;
}
