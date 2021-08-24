#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		double k;
		cin>>k;
		
		if(k == 1){
			cout<<"1 1\n";
			continue;
		}

		int pos = ceil(sqrt(k));
		int real = sqrt(k);
		
		if(real == pos)
		{
			cout<<real<<" 1\n";
			continue;
		}
		
		int maxVal = pos*pos;
		int minVal = real*real+1;
		int mid = (minVal + maxVal)/2;
		
		if(mid == k)
			cout<<pos<<" "<<pos<<"\n";
		else if(mid < k)
			cout<<pos<<" "<<pos-(k-mid)<<"\n";
		else
			cout<<(k-minVal)+1<<" "<<pos<<"\n";
	}
	
	return 0;
}
