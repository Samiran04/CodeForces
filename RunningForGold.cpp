#include <bits/stdc++.h>
using namespace std;

struct Rank {
	int arr[5];
};

bool operator < (const Rank &a, const Rank &b)
{
	int count = 0;
	
	for(int i=0;i<5;i++)
	{
		if(a.arr[i] < b.arr[i])
			count++;
	}
	
	return (3 <= count);
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		Rank ath[n];
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<5;j++)
				cin>>ath[i].arr[j];
		}
		
		int u = 0;
		
		for(int i=0;i<n;i++)
		{
			if(i == u)
				continue;
			
			if(ath[i] < ath[u])
				u = i;
		}
		
		bool flag = true;
		
		for(int i=0;i<n;i++)
		{
			if(i == u)
				continue;
			
			if(ath[i] < ath[u])
			{
				flag = false;
				break;
			}
		}
		
		if(flag)
			cout<<u+1<<"\n";
		else
			cout<<-1<<"\n";
	}
	
	return 0;
}
