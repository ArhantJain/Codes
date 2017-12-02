// SATYAMEVA JAYATE 

//Link : http://codeforces.com/problemset/problem/884/B  : Implementation

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int n,x,a,i,sum=0;
	cin >> n >> x; // no.  of segments formed and length of crossword puzzle
	for(i=0;i<n;i++) // ith element shows the length of ith segment
	{
		cin >> a;
		sum +=a;
	}
	if(n-1+sum ==x)
	{
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
	return 0;
}
