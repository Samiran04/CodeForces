#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int arr[n+1], pre[n+1]={0};
	string str;
	
	for(int i=1;i<=n;i++)
		cin>>arr[i];
		
	cin>>str;
	
	for(int i=1;i<=n;i++)
	{
		pre[i] = pre[i-1];
		
		if(str[i-1] == '1')
			pre[i] += 1;
	}
	
	pair<int,int> prr[n+1];
	
	for(int i=1;i<=n;i++)
		prr[i] = make_pair(arr[i], i);
		
	sort(prr+1, prr+n+1);
		
	bool flag = true;
	
	for(int i=1;i<=n;i++)
	{
		if(prr[i].second == i)
			continue;
			
		int r = max(prr[i].second, i);
		int l = min(prr[i].second, i);
		
		if(pre[r-1]-pre[l-1] != r-l)
		{
			flag = false;
			break;
		}
	}
	
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
		
	return 0;
}
