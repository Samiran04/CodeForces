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
		
		vector<int> odd, even;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			
			if(arr[i]%2 == 1)
				odd.push_back(arr[i]);
			else
				even.push_back(arr[i]);
		}
		
		for(auto e:even)
			cout<<e<<" ";
		
		for(auto o:odd)
			cout<<o<<" ";
			
		cout<<"\n";
	}
	
	return 0;
}
