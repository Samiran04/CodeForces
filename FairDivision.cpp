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
		int arr[n],count1=0,count2=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n,greater<int>());
		for(int i=0;i<n;i++)
		{
			if(count1<count2)
				count1+=arr[i];
			else
				count2+=arr[i];
		}
		if(count1!=count2)
			cout<<"NO";
		else
			cout<<"YES";
		cout<<"\n";
	}
	return 0;
}
