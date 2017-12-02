// SATYAMEVA JAYATE

// Link : http://codeforces.com/problemset/problem/893/B : Brute Force

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int k,i,n,ans,x;
	vector <int> v1;
	for(k=1;k<=10;k++)
	{
		x = ((pow(2,k)-1)*(pow(2,k-1)));
		v1.push_back(x);
	}
	cin >> n;
	for(i=9;i>=0;i--)
	{
		if(n%v1[i] ==0)
		{
			ans=v1[i];
			break;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
