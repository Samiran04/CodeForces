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
		
		if(n == 2)
		{
			cout<<-1<<"\n";
			continue;
		}
		
		int arr[n][n], c = 1;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				arr[j][i] = c++;
			}
		}
		
		for(int i=1;i<n;i+=2)
		{
			for(int j=0;j<n-1;j++)
			{
				swap(arr[i][j], arr[i][j+1]);
			}
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	
	return 0;
}
