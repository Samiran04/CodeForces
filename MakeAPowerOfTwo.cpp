#include <bits/stdc++.h>
using namespace std;

vector<string> arr;

typedef long long ll;
const ll P2LIM = (ll)2e18;

long long power(long long val, long long p)
{
	if(p == 0)
		return 1;
	
	if(p == 1)
		return val;
		
	long long res = power(val, p/2);
	
	if(p%2 == 0)
		return res;
	
	return res * val;
}

void getAll() {
	
	for(long long i=1;i<=P2LIM;i=i*2)
		arr.push_back(to_string(i));
	
	/*for(int i=0;i<31;i++)
	    cout<<arr[i]<<" ";
	
	cout<<"\n";*/
}

int match(string str1, string str2)
{
	int i = 0, j = 0;
	
	while(i<str1.length() && j<str2.length()) {
		if(str1[i] == str2[j])
		{
			i++;
			j++;
		}
		else
			j++;
	}
	
	return i;
}

int main()
{
	int t;
	cin>>t;
	
	getAll();
	
	while(t--)
	{
		int n, res;
		cin>>n;
		
		string str = to_string(n);
		
		res = str.length()+1;
		
		for(int i=0;i<arr.size();i++)
		{
			int retain = match(arr[i], str);
			int remove = str.length() - retain;
			int add = arr[i].length() - retain;
			
			int curr = remove + add;
			
			res = min(res, curr);
		}
		
		cout<<res<<"\n";
	}
	
	return 0;
}
