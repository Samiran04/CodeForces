#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int k, i = 1, count = 0;
		cin>>k;
		
		while(1)
		{	
			if(i%3 == 0 || i%10 == 3)
			{
				i++;
				continue;
			}
			
			count++;
			
			if(count == k)
				break;
				
			i++;
		}
		
		cout<<i<<"\n";
	}
	
	return 0;
}
