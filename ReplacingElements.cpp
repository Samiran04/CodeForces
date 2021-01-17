#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		int arr[n],first=1001,second=1001;
		bool flag=true;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]<first)
			{
				second=first;
				first=arr[i];
			}
			else if(arr[i]<second)
				second=arr[i];
			if(arr[i]>d)
				flag=false;
		}
		if(first+second<=d||flag)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}
	return 0;
}
