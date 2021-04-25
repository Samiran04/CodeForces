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
		
		string str[n];
		
		pair<int,int> pos[n];
		
		for(int i=0;i<n;i++){
			cin>>str[i];
		}
		
		int k = 0;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(str[i][j] == '*')
				{
					pos[k].first = i;
					pos[k].second = j;
					k++;
				}
				
				if(k == 2)
					break;
			}
			if(k == 2)
				break;
		}
		
		if(pos[0].first == pos[1].first)
		{
			for(int i=0;i<n;i++)
			{
				if(str[i][pos[0].second] == '.')
				{
					str[i][pos[0].second] = '*';
					str[i][pos[1].second] = '*';
					break;
				}
			}
		}
		else if(pos[0].second == pos[1].second)
		{
			for(int i=0;i<n;i++)
			{
				if(str[pos[0].first][i] == '.')
				{
					str[pos[0].first][i] = '*';
					str[pos[1].first][i] = '*';
					break;
				}
			}
		}
		else
		{
			str[pos[0].first][pos[1].second] = '*';
			str[pos[1].first][pos[0].second] = '*';
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				cout<<str[i][j];
			cout<<"\n";
		}
	}
	
	return 0;
}
