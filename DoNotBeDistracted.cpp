#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		string str;
		cin>>n;
		cin>>str;
		
		bool flag = false;
		
		for(int i=1;i<n;i++)
		{
			if(str[i] == str[i-1])
				continue;
				
			for(int j=i;j<n;j++)
			{
				if(str[i-1] == str[j])
				{
					flag = true;
					break;
				}
			}
			
			if(flag)
				break;
		}
		
		if(!flag)
			cout<<"YES";
		else
			cout<<"NO";
		
		cout<<"\n";
	}
	
	return 0;
}
