#include <bits/stdc++.h>
using namespace std;

const int N = 200007;

void create(int dp[6][N], int n, string str, string abc, int type)
{
	int i = 1, j = 0;
	
	while(i<=n)
	{
		if(str[i-1] == abc[j])
			dp[type][i] = dp[type][i-1];
		else
			dp[type][i] = dp[type][i-1] + 1;
		
		j = (j+1)%3;
		
		i++;
	}
}

int main()
{
	int n, q;
	string str;
	
	cin>>n>>q;
	cin>>str;
	
	int dp[6][N] = {0};
	string arr[] = {"abc", "acb", "cba", "cab", "bac", "bca"};
	
	for(int i=0;i<6;i++)
		create(dp, n, str, arr[i], i);
	
	while(q--)
	{
		int l, r, ans = INT_MAX;
		cin>>l>>r;
		
		for(int i=0;i<6;i++)
			ans = min(ans, dp[i][r]-dp[i][l-1]);
			
		cout<<ans<<"\n";
	}
	
	return 0;
}
