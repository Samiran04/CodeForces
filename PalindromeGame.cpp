#include <bits/stdc++.h>
using namespace std;

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
		
		bool rev = true, turn = false, plan = true;
		
		int a = 0, b = 0, count = 0;
		
		for(int i=0;i<n;i++)
		{
			if(str[i] == '0')
				count++;
		}
		
		if(count == 0)
			cout<<"DRAW\n";
		else if(count == 1)
			cout<<"BOB\n";
		else if(count%2 == 0)
			cout<<"BOB\n";
		else
			cout<<"ALICE\n";
	}
	
	return 0;
}
