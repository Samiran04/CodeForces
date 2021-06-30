#include <bits/stdc++.h>
using namespace std;

int search(pair<int,int> base[], int n, int a)
{
	int s = 0, e = n-1;
	
	if(base[e].first <= a)
		return n;
	
	while(s<e)
	{
		int mid = (s+e)/2;
		
		if(base[mid].first <= a)
			s = mid+1;
		else
			e = mid;
	}
	
	return s;
}

int main()
{
	int s, b;
	cin>>s>>b;
	
	int arr[s], pre[b] ={0};
	
	pair<int,int> base[b];
	
	for(int i=0;i<s;i++)
		cin>>arr[i];
		
	for(int i=0;i<b;i++)
	{
		int val1, val2;
		cin>>val1>>val2;
		
		base[i] = make_pair(val1, val2);
	}
	
	sort(base, base+b);
	
	pre[0] = base[0].second;
	
	for(int i=1;i<b;i++)
		pre[i] = pre[i-1] + base[i].second;
		
	for(int i=0;i<s;i++)
	{
		int index = search(base, b, arr[i]);
		
		if(index != 0)
			cout<<pre[index-1];
		else
			cout<<0;
			
		cout<<"\n";
	}
	
	return 0;
}
