#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int a, b, k;
		cin>>a>>b>>k;
		
		vector<int> boys[a+1], girls[b+1];
		
		int A[k], B[k];
		
		for(int i=0;i<k;i++)
			cin>>A[i];
			
		for(int i=0;i<k;i++)
			cin>>B[i];
		
		for(int i=0;i<k;i++)
		{
			boys[A[i]].push_back(B[i]);
			girls[B[i]].push_back(A[i]);
		}
		
		long long count = 0;
		
		for(int i=0;i<k;i++)
			count += (k-boys[A[i]].size()-girls[B[i]].size()+1);
			
		cout<<count/2<<"\n";
	}
	
	return 0;
}
