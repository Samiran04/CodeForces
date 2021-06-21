#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	string str;
	cin>>str;
	
	int pos = n-1;
	
	for(int i=0;i<n-1;i++)
	{
		if(str[i] > str[i+1])
		{
			pos = i;
			break;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		if(i == pos)
			continue;
		cout<<str[i];
	}
	
	return 0;
}
