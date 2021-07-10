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
			
		stack<int> st;
		
		st.push(arr[0]);
		
		for(int i=1;i<n;i++)
		{
			if(st.top() < arr[i] && i == n-1)
			{
				st.pop();
				st.push(arr[i]);
			}
			
			if(st.top() < arr[i])
				continue;
				
			st.push(arr[i]);
		}
		
		if(st.size() == 1){
			cout<<"YES\n";
			continue;
		}
		
		int val = st.top();
		st.pop();
		
		bool flag = true;
		
		while(!st.empty())
		{
			if(st.top() > val)
			{
				flag = false;
				break;
			}
			
			st.pop();
		}
		
		if(flag)
			cout<<"YES";
		else
			cout<<"NO";	
		
		cout<<"\n";
	}
	
	return 0;
}
