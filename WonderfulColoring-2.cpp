#include <bits/stdc++.h>
using namespace std;

struct my_comp {
	bool operator()(vector<int> &a, vector<int> &b)
	{
		return a.size() < b.size();
	}
};

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, k, count = 1, m;
		cin>>n>>k;
		m = n;
		
		int arr[n], res[n] = {0};
		unordered_map<int, vector<int>> mp;
		priority_queue<vector<int>, vector<vector<int>>, my_comp> p;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			mp[arr[i]].push_back(i);
		}
		
		for(auto m:mp)
			p.push(m.second);
			
		while(!p.empty())
		{
			vector<int> curr = p.top();
			p.pop();
			
			int neg = 0;
			bool flag = false;
			
			for(int i=0;i<min((int)(curr.size()), k);i++){
				
				if(count == 1)
				{
					if(k > n){
						flag = true;
						break;
					}
				}
				
				n--;
				neg++;
				
				res[curr[i]] = count++;
				
				count = count%(k+1);
				
				if(count == 0)
					count = 1;
			}
			
			if(flag)
				break;
			
			if(neg < curr.size())
				n -= (curr.size()-neg);
		}
		
		for(int i=0;i<m;i++)
			cout<<res[i]<<" ";
			
		cout<<"\n";
	}
	
	return 0;
}
