#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin>>q;
	
	while(q--)
	{
		int n, t, l, r;
		cin>>n>>t;
		
		l = n, r = 1;
		
		vector<long long> arr(n+1, LLONG_MAX);
		vector<long long> sorce(n+1, 0);
		vector<pair<int, long long> > A(t);
		
		for(int i=0;i<t;i++)
		{
			int a;
			cin>>a;
			
			A[i].first = a;
		}
		
		for(int i=0;i<t;i++)
		{
			int temp;
			cin>>temp;
			
			A[i].second = temp;
		}
		
		for(int i=0;i<t;i++)
		{
			sorce[A[i].first] = A[i].second;
			
			l = min(l, A[i].first);
			r = max(r, A[i].first);
		}
		
		long long curr = sorce[l];
		
		for(int i=l;i<=n;i++)
		{
			if(sorce[i])
				curr = min(curr, sorce[i]);
			
			arr[i] = curr;
			
			curr++;
		}
		
		curr = sorce[r];
		
		for(int i=r;i>=1;i--)
		{
			if(sorce[i])
				curr = min(curr, sorce[i]);
			
			arr[i] = min(curr, arr[i]);
			
			curr++;
		}
		
		for(int i=1;i<=n;i++)
			cout<<arr[i]<<" ";
			
		cout<<"\n";
	}
	
	return 0;
}
