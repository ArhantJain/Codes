// SATYAMEVA JAYATE 

// Link :http://codeforces.com/problemset/problem/893/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,fla=0,flag[5],a;
	cin >> n;
	flag[1]=0; // flag =0 implies it is possible that 1 can win 
	flag[2]=0;
	flag[3]=1;
	for(i=0;i<n;i++)
	{
		cin >> a;
		if(flag[a] ==0)
		{
			for(j=1;j<=3;j++)
			{
				if(j!=a)
					flag[j] = !flag[j];
			}
		}
		else 
		{
			fla=1;
			cout<<"NO\n";
			break;
		}
	}
	if(fla==0)
		cout<<"YES\n";

	return 0;
}
