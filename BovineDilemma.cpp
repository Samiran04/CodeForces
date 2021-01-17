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
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		set<int>st;
		if(n==1)
			cout<<0;
		else if(n==2)
			cout<<1;
		else
		{
			for(int i=0;i<n-1;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					st.insert(abs(arr[i]-arr[j]));
				}
			}
			cout<<st.size();
		}
		cout<<"\n";
	}
	return 0;
}
