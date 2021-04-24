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
		
		int countT = 0, countM = 0;
		
		bool flag = true;
		
		for(int i=0;i<n;i++)
		{
			if(str[i] == 'T')
				countT++;
			else
			{
				if(countT == 0)
				{
					flag = false;
					break;
				}
				countM++;
				countT--;
			}
		}
		
		if(flag && countT == countM)
		{
			countT = countM = 0;
			
			for(int i=n-1;i>=0;i--)
			{
				if(str[i] == 'T')
				countT++;
				else
				{
					if(countT == 0)
					{
						flag = false;
						break;
					}
					countM++;
					countT--;
				}
			}
		}
		
		if(!flag || countT != countM)
			cout<<"NO";
		else
			cout<<"YES";
			
		cout<<"\n";
	}
	
	return 0;
}
