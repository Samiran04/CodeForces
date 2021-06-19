#include <bits/stdc++.h>
using namespace std;

void getString(string str, string &b, string &a, int n, int i)
{
	for(;i<n;i++){
		b.push_back(str[i]);
		a.push_back('0');
	}
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		string str;
		cin>>str;
		
		string a, b;
		
		for(int i=0;i<n;i++)
		{
			if(str[i] == '2')
			{
				a.push_back('1');
				b.push_back('1');
			}
			else if(str[i] == '3')
			{
				a.push_back('2');
				b.push_back('1');
				getString(str, b, a, n, i+1);
				break;
			}
			else if(str[i] == '1')
			{
				a.push_back('1');
				b.push_back('0');
				getString(str, b, a, n, i+1);
				break;
			}
			else
			{
				a.push_back('0');
				b.push_back('0');
			}
		}
		
		cout<<a<<"\n"<<b<<"\n";
	}
	
	return 0;
}
