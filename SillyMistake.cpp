#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	int hash[1000001] = {0};
	
	bool flag = true;
	
	unordered_set<int> st;
	vector<vector<int>>res;
	vector<int> v;
	
	int count = 0;
	 	
	for(int i=0;i<n;i++)
	{
		if(arr[i] < 0)
		{
			if(hash[abs(arr[i])] == 0)
			{
				flag = false;
				break;
			}
			else
				hash[abs(arr[i])] = 0;
			
			count--;
		}
		else
		{
			if(hash[arr[i]] == 1 || st.find(arr[i]) != st.end())
			{
				flag = false;
				break;
			}
			else
				hash[arr[i]] = 1;
				
			st.insert(arr[i]);
			
			count++;
		}
		
		v.push_back(arr[i]);
		
		if(count == 0)
		{
			res.push_back(v);
			v = vector<int>();
			st = unordered_set<int>();
		}
	}
	
	if(!flag || count != 0)
		cout<<-1;
	else
	{
		cout<<res.size()<<"\n";
		
		for(int i=0;i<res.size();i++)
			cout<<res[i].size()<<" ";
	}
	
	return 0;
}
