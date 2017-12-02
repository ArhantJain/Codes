// SATYAMEVA JAYATE 

// Link : http://codeforces.com/problemset/problem/886/A : Brute Force

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i,j,k,flag=0,sum=0,x,arr[10000];
	for(i=0;i<6;i++)
	{
		cin >> arr[i];
		sum +=arr[i];
	}
	if( sum%2 == 1)
		cout<<"NO\n";
	else
	{
		x = sum/2;
		for(i=0;i<6;i++)
		{
			for(j=i+1;j<6;j++)
			{
				for(k=j+1;k<6;k++)
				{
					if(arr[i]+arr[j]+arr[k] == x)
						flag=1;
				}
			}
		}
	
	if(flag==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	}
	return 0;
}
		
