// SATYAMEVA JAYATE

// Link : http://codeforces.com/problemset/problem/884/A : Implementation

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,t,a,days=0,sum=0,i;
	cin >> n >> t; // No of days and time required to complete the book
	for(i=0;i<n;i++)
	{
		cin >> a;
		sum += 86400-a;
		if(sum>=t)
		{
			days++;
			break;
		}
		else
			days++;
	}
	cout<<days<<endl;
	return 0;
}

