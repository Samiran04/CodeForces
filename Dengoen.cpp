#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int d=9,sum=a+b+c;
		int val=sum/d;
		if(sum<9){
			cout<<"NO\n";
			}
		else if(sum%d==0&&(a>=val&&b>=val&&c>=val)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
        }
	}
	return 0;
}
 
